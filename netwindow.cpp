#include "netwindow.h"
#include "ui_netwindow.h"
#include "mainwindow.h"

netwindow::netwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::netwindow)
{
    qDebug()<<"netwindow()";
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("netwindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("网络设置");
    ui->l_wait->hide();
//    连接网络
    net = netmodel::get_net();
//    string 转 int互转
    QString old_ip = net->get_Ip();
    QString old_port = QString::number(net->get_Port(),10);
    ui->old_ip->setText(old_ip);
    ui->old_port->setText(old_port);
    if(net->get_flag())
        ui->status->setText("已连接");
    connect(net, SIGNAL(connect_ok()), this, SLOT(netTimeout()));

//    连接超时处理
    netTime = new QTimer();
    connect(netTime, SIGNAL(timeout()),this,SLOT(netFalse()));

//    键盘del
    connect(ui->wg_keys,SIGNAL(click_del()),this,SLOT(on_pushButton_10_clicked()));
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

}

netwindow::~netwindow()
{
    qDebug()<<"~netwindow";
    delete netTime;
    delete ui;
}

void netwindow::on_bt_reset_clicked()
{
    QString ip = ui->IP->text();
    QString port = ui->PORT->text();
    if(ip.isEmpty() || port.isEmpty())
    {
        QMessageBox::warning(this, "提示","请输入服务器IP或端口号");

        return ;
    }
    net->connect_toserver(ip, port.toInt());
    netTime->start(1000*3);

    ui->l_wait->show();
    ui->bt_reset->setEnabled(false);

}

void netwindow::netTimeout()
{
    qDebug()<<"netTimeout()";
    netTime->stop();
    ui->bt_reset->setEnabled(true);
    if(net->get_flag() != 1)
         QMessageBox::warning(this, "提示","连接失败");
    else{
        ui->status->setText("已连接");
        ui->old_ip->setText(ui->IP->text());
        ui->old_port->setText(ui->PORT->text());
    }
    return;
}

void netwindow::netFalse()
{
    ui->l_wait->hide();
    ui->bt_reset->setEnabled(true);
    netTime->stop();
    QMessageBox::warning(this, "提示","连接失败");
}




void netwindow::on_pushButton_10_clicked()
{
    QString text;
    if(ui->IP->hasFocus()){
        text = ui->IP->text();
        text.remove(text.size()-1,1);
        ui->IP->setText(text);
    }
    if(ui->PORT->hasFocus()){
        text = ui->PORT->text();
        text.remove(text.size()-1,1);
        ui->PORT->setText(text);
    }
}

void netwindow::fanhui()
{
    this->parentWidget()->show();
    this->close();
}
