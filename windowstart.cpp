#include "windowstart.h"
#include "ui_windowstart.h"
#include <QFile>

windowstart::windowstart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowstart)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("windowstart{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("添加员工");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

    //
    ui->icon->setStyleSheet("QLabel{border:2px solid rgb(0, 255, 0);}");
    ui->icon->setStyleSheet("border-image:url(./icon.png)");

    net = netmodel::get_net();
    connect(net, SIGNAL(em_sig(QString)), this, SLOT(get_em(QString)));
    connect(net, SIGNAL(ems_sig(QString)), this, SLOT(post_ems(QString)));
    connect(net, SIGNAL(over_sig(QString)), this, SLOT(get_over(QString)));
    //connect(net, SIGNAL(rule_sig(QString)),

    //管理员的权限。
    sql = sqlmodel::get_model();
    connect(sql, SIGNAL(sendAuthority(QString)), this, SLOT(auth_rfid(QString)));

    //刷新界面；
    t_clean = new QTimer();
    connect(t_clean, SIGNAL(timeout()), this, SLOT(clean_ui()));
    t_clean->start(10000);

    //用于控制进程
    t_contrll = new QTimer();
    connect(t_contrll, SIGNAL(timeout()), this, SLOT(mycontrll()));
    t_contrll->start(1000);

    //刷卡
    mythread = myThread::get_thread();
    connect(mythread, SIGNAL(send_rfid(int)),this,SLOT(get_rfid(int)));
    mythread->start();

    //系统控制
    mysys = sys_config::get_model();
    connect(mysys, SIGNAL(ontime_show_(QString)), this, SLOT(ontime_show(QString)));

    mykq_flag = 1;//1，既不会开始
    kq_is = false;

    //当系统重启的时候，可以重新获取rfid_list
    sql->em_info_selectAll(rfid_list);

    bp = Beep::get_beep();
    bp_qt = new QTimer();
    connect(bp_qt, SIGNAL(timeout()), this, SLOT(close_bp()));


}

windowstart::~windowstart()
{
    delete ui;
}

void windowstart::kq_ok(QString info)
{
    bp_ok();
    QString str = QString("考勤成功，%1").arg(info);
    ui->l_tip->setText(str);
    t_clean->start(5000);
}

void windowstart::kq_no()
{
    bp_no();
    ui->l_tip->setText("考勤失败");
    t_clean->start(5000);
}

void windowstart::kq_ed()
{
    bp_no();
    ui->l_tip->setText("你已经考勤");
    t_clean->start(5000);
}

void windowstart::kq_out()
{
    bp_no();
    ui->l_tip->setText("非考勤时间");
    t_clean->start(5000);
}

void windowstart::kq_err()
{
    bp_no();
    ui->l_tip->setText("你不能考勤");
    t_clean->start(5000);
}

void windowstart::is_kq()
{
    QList<QString>::Iterator it;//用于遍历rfid_list
    int i = 0;//用于判断是否可以考勤。
    Em_info em;//用于保存显示的员工数据。0
    QString info;//是否迟到的考勤的信息。
    QString tm_point;//时间段值，amg,amo....

    //判断是否今天可以考勤
    sql->em_info_selectforid(myrfid, em);//em的初始化
    show_em(em);

    it = rfid_list.begin();
    for(;it != rfid_list.end(); it++){
        if(myrfid == *it){
            i = 1;
        }
    }
    if(0 == i){
        kq_err();
        return;
    }

    //是否可以考勤    
    //那么infos里面的info显示的是最近的考勤的不准点情况
    //第一次获取time_num的值
    if( !kq_is ){
        kq_out();
        return;
    }else{
        if(1 == mykq_flag){
            mykq_flag = 0;
            rfid_ed.clear();
            rfid_in = rfid_list;
        }
    }

    //获取不到正确时间段，则考勤失败。
    get_time_point(tm_point);
    qDebug()<<"tm_point:"<<tm_point;

    if("null" == tm_point){
        kq_no();
        return;
    }

    //判断是否已经考勤。
    it = rfid_ed.begin();
    for(;it != rfid_ed.end(); it++){
        if(myrfid == *it){
            kq_ed();
            return ;
        }
    }

    //开始考勤：取得考勤状态信息，考勤时间段，保存。
    it = rfid_in.begin();

    if(!sql->em_infos_update(em.id, tm_point, time_curr)){
        kq_no();

    }else{
        //考勤状态信息。
        if((time_num/2) == 0){//上班
            if(!mysys->is_ontime(time_curr, time_num)){

                info = "准时";//准点
                sql->em_infos_update_state(em.id, tm_point, info);
            }else{
                info = "迟到";//
                sql->em_infos_update_state(em.id, tm_point, info);
                sql->em_infos_update(em.id, "info", "迟到");
            }
        }else//下班
            info = "welcome";

        sql->em_infos_update(em.id, "info", info);
        rfid_ed<<myrfid;
        rfid_in.removeAll(myrfid);
        kq_ok(info);

    }

}

void windowstart::get_rfid(int rfid)
{

    myrfid.clear();

    //备注信息如何写？

    myrfid = QString("%1").arg(rfid);
    qDebug()<<"myrfid:"<<myrfid;
    sql->authority_select(myrfid);



    is_kq();


}

void windowstart::mycontrll()
{
    QString commond = QString("em_info#%1").arg(QDate::currentDate().toString("yyyy-MM-dd"));

    QString time = QTime::currentTime().toString("hh:mm:ss");
    time_curr = QTime::currentTime().toString("hh:mm");
    if(time.contains("2:00:00")){
        net->send_data("em_infos_up");
    }

    if(time.contains("6:00:00")){
        net->send_data(commond);
    }

    kq_is = mysys->is_kq(time_curr, time_num);
    if(!kq_is){
        //如果第一次出现非考勤时间，那么则是结束考勤标识，rfid_in全部缺勤。清空rfid_in,rfid_ed,
        if(0 == mykq_flag){
            Em_info em;
            ui->l_tip2->setText(" ");
            mykq_flag = 1;
            for(int i = 0; i < rfid_in.size(); i++){
                sql->em_info_selectforid(rfid_in.at(i), em);//em的初始化
                //未完成
                if((time_num/2) == 0){//上班
                    sql->em_infos_update(em.id, "info", "缺勤");
                    //sql->em_infos_update_state(em.id, tm_point, "缺勤");
                }
                else{
                    sql->em_infos_update(em.id, "info", "早退");
                    //sql->em_infos_update_state(em.id, tm_point, "早退");
                }
            }
        }
    }

}

void windowstart::bp_ok()
{
    bp->start_Beep();
    bp_qt->start(200);
}

void windowstart::bp_no()
{
    bp->start_Beep();
    bp_qt->start(1000);
}

void windowstart::show_em(Em_info &em)
{
    ui->name->setText(em.name);
    ui->id->setText(em.id);
    ui->depart->setText(em.department);

    QFile file(em.icon);
    if(file.exists()){
        QString em_icon = QString("border-image:url(%1)").arg(em.icon);
        ui->icon->setStyleSheet(em_icon);
    }else{
       ui->icon->setStyleSheet("border-image:url(./icon.png)");
    }

}

void windowstart::get_time_point(QString &t)
{
    switch (time_num) {
    case 0:
        t = "amg";
        break;
    case 1:
        t = "amo";
        break;
    case 2:
        t = "pmg";
        break;
    case 3:
        t = "pmo";
        break;
    case 4:
        t = "nmg";
        break;
    case 5:
        t = "nmo";
        break;

    default:
        t = "null";
        break;
    }

}

void windowstart::fanhui()
{
    this->parentWidget()->show();
    this->close();
}

void windowstart::get_em(QString json)
{
    QList<Em_info> list_em;
    Em_info em;
    jsonc.json_toem_info(json, list_em);

    QList<Em_info> :: iterator iter;
    //清空操作
    rfid_list.clear();
    sql->em_info_deleteAll();

    for(iter = list_em.begin(); iter != list_em.end(); iter++){
        em = *iter;
        if( !sql->em_info_insert(em)){
            net->send_data("em_info#false");
            return;
        }
        //保存该用户的rfid值以及直接插入到数据库中。
        rfid_list<<em.rfid;
        //sql->em_infos_insert(em);

    }
    net->send_data("em_info_ok");
}

void windowstart::post_ems(QString json)
{
    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    //如果失败，就重发一次命令。
    if(json.contains("em_infos_up#false")){
        net->send_data("em_infos_up");
        return;
    }

    //数据上传成功。
    if(json.contains("em_infos#ok")){
        qDebug()<<"em_infos ok";
        return;
    }
    //开始上传。
    QList<Em_infos> list_em;
    QList<Em_infos_state> list_state;
    QString json_data;


    sql->em_infos_selectfordate(date, list_em);
    jsonc.em_infos_tojson(list_em, json_data);
    net->send_data(json_data);

    //上传考勤情况
    /*
    sql->em_infos_selectfordate_state(date, list_state);
    jsonc.em_infos_state_tojson(list_state, json_data);
    net->send_data(json_data);
    */
}

void windowstart::get_over(QString json)
{
    if(json.contains("ok"))
        kq_ok("welcome");
    else
        kq_no();
}



void windowstart::on_bt_card_clicked()
{
    get_rfid(666);
}

void windowstart::clean_ui()
{
    ui->icon->setStyleSheet("border-image:url(./icon.png)");
    ui->id->setText("");
    ui->name->setText("");
    ui->depart->setText("");
    ui->l_tip->setText("请刷卡.....");
    t_clean->stop();
    //ui->wg_top->hideButton();
}

void windowstart::ontime_show(QString _time)
{
    ui->l_tip2->setText(_time);
}

void windowstart::on_bt_card_down_clicked()
{
    QString commond = QString("em_info#%1").arg(QDate::currentDate().toString("yyyy-MM-dd"));
    net->send_data(commond);
}

void windowstart::auth_rfid(QString _rfid)
{
    if(_rfid == myrfid){
        ui->wg_top->showButton();
    }
}

void windowstart::on_bt_card_up_clicked()
{
    net->send_data("em_infos_up");
}

void windowstart::on_bt_start_clicked()
{
    qDebug()<<"start kq";
    mysys->test_start();
}

void windowstart::on_bt_end_clicked()
{
    qDebug()<<"end kq";
    mysys->test_end();
}

void windowstart::close_bp()
{
    bp_qt->stop();
    bp->close_Beep();
}
