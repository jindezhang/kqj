#include "windowstart.h"
#include "ui_windowstart.h"

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
    ui->icon->setStyleSheet("border-image:url(./icon.png)");

    net = netmodel::get_net();
    connect(net, SIGNAL(em_sig(QString)), this, SLOT(get_em(QString)));
    connect(net, SIGNAL(ems_sig(QString)), this, SLOT(post_ems(QString)));
    connect(net, SIGNAL(over_sig(QString)), this, SLOT(get_over(QString)));

    sql = sqlmodel::get_model();

    //刷新界面；
    t_clean = new QTimer();
    connect(t_clean, SIGNAL(timeout()), this, SLOT(clean_ui()));

    //用于控制进程
    t_contrll = new QTimer();
    connect(t_contrll, SIGNAL(timeout()), this, SLOT(mycontrll()));
    t_contrll->start(1000);
}

windowstart::~windowstart()
{
    delete ui;
}

void windowstart::kq_ok()
{
    ui->l_tip->setText("考勤成功");
    t_clean->start(5000);
}

void windowstart::kq_no()
{
    ui->l_tip->setText("考勤失败");
    t_clean->start(5000);
}

void windowstart::kq_ed()
{
    ui->l_tip->setText("已经考勤");
    t_clean->start(5000);
}

void windowstart::kq_err()
{
    ui->l_tip->setText("你不能考勤");
    t_clean->start(5000);
}

void windowstart::get_rfid()
{
    rfid_in.clear();
    sql->em_info_selectforid(rfid_in);
}

void windowstart::mycontrll()
{
    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    QString time = QTime::currentTime().toString("hh:mm");


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
    for(iter = list_em.begin(); iter != list_em.end(); iter++){
        em = *iter;
        if( !sql->em_info_insert(em)){
            net->send_data("em_info#false");
        }
    }
    net->send_data("em_info#true");
}

void windowstart::post_ems(QString json)
{
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
    QString json_data;

    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    sql->em_infos_selectfordate(date, list_em);
    jsonc.em_infos_tojson(list_em, json_data);
    net->send_data(json_data);

}

void windowstart::get_over(QString json)
{
    if(json.contains("ok"))
        kq_ok();
    else
        kq_no();
}



void windowstart::on_bt_card_clicked()
{

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
