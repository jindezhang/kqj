#include "windowadd.h"
#include "ui_windowadd.h"

windowadd::windowadd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowadd)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("windowadd{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("添加员工");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

    net = netmodel::get_net();
    rfid = QString("0");
    connect(net, SIGNAL(Status_add(QString)),this,SLOT(addstatus(QString)));

    set_add(false);
    ui->bt_end->setEnabled(false);
    //连接读取rfid的线程；
    //刷卡
    mythread = myThread::get_thread();
    connect(mythread, SIGNAL(send_rfid(int)),this,SLOT(get_rfid(int)));
    mythread->start();

    //蜂鸣器
   bp = Beep::get_beep();
   qtt = new QTimer();
   connect(qtt, SIGNAL(timeout()), this, SLOT(beep_close()));


}

windowadd::~windowadd()
{
    delete ui;
}

void windowadd::fanhui()
{
    this->parentWidget()->show();
    this->close();
}

void windowadd::addstatus(QString status)
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);

    if(status.contains("ok", Qt::CaseInsensitive)){
         ui->l_tip->setText("添加成功！");
         bp_ok();
    }else if(status.contains("false", Qt::CaseInsensitive)){
        ui->l_tip->setText("添加失败！");
        bp_no();
    }else{
        //如果不是状态信息，那么就是员工数据。
        jsonc.json_toadd(status, list);
        ui->id->setText(list.id);
        ui->name->setText(list.name);
        ui->depart->setText(list.department);
        ui->l_tip->setText("请刷卡...");
    }

}

void windowadd::get_rfid(int rfid)
{
    if(!(ui->pushButton->isEnabled()))
        return;

    this->rfid = QString("%1").arg(rfid);
    qDebug()<<"rfid:"<<rfid;
    ui->l_tip->setText("刷卡成功。");
}

void windowadd::set_add(bool b)
{
    ui->pushButton->setEnabled(b);
    if(!b)
        ui->l_tip->hide();
    else
        ui->l_tip->show();
}

void windowadd::bp_ok()
{
    bp->start_Beep();
    qtt->start(100);
}

void windowadd::bp_no()
{
    bp->start_Beep();
    qtt->start(1000);
}

void windowadd::beep_close()
{
    qtt->stop();
    bp->close_Beep();
}

void windowadd::on_pushButton_2_clicked()
{
    ui->id->setText("");
    ui->name->setText("");
    ui->depart->setText("");
    ui->l_tip->setText("请刷卡.....");
    this->rfid = QString("0");
}

void windowadd::on_pushButton_clicked()
{
    if(!net->get_flag()){
        QMessageBox::warning(this,"提示", "网络未连接，添加失败！");
        return;
    }
    if(rfid == "0"){
        QMessageBox::warning(this,"提示", "未获取卡号，请重新刷卡");
        return;
    }

    //发送卡号给服务器。
    QString json_data;
    QStringList list_value;
    list_value<<rfid<<list.id;
    jsonc.add_tojson(list_value,json_data);
    net->send_data(json_data);

    //禁用按钮，发送成功后，可以启用。
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->l_tip->setText("正在添加...请稍候。");

}

void windowadd::on_pushButton_3_clicked()
{
    if(net->get_flag() == 0){
        QMessageBox::warning(this,"提示", "未连接服务，无法使用该功能。");
        return;
    }
    ui->bt_end->setEnabled(true);
    set_add(true);
    on_pushButton_2_clicked();
    net->send_data("add");

}

void windowadd::on_bt_end_clicked()
{
    set_add(false);
    ui->bt_end->setEnabled(false);
}
