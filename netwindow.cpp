#include "netwindow.h"
#include "ui_netwindow.h"
#include "mainwindow.h"

netwindow::netwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::netwindow)
{
    qDebug()<<"netwindow()";
    ui->setupUi(this);
    setStyleSheet("netwindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色

    connect(ui->widget,SIGNAL(bt_click()),this,SLOT(fanhui()));
    ui->widget->setDir("hhhh");
    net = netmodel::get_net();

//    string 转 int互转
    QString old_ip = net->get_Ip();
    QString old_port = QString::number(net->get_Port(),10);

    ui->old_ip->setText(old_ip);
    ui->old_port->setText(old_port);
    if(net->get_flag())
        ui->status->setText("已连接");

    connect(net, SIGNAL(connect_ok()), this, SLOT(netTimeout()));
}

netwindow::~netwindow()
{
    qDebug()<<"~netwindow";
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
}

void netwindow::netTimeout()
{
    qDebug()<<"netTimeout()";
    //netTime->stop();
    if(net->get_flag() != 1)
         QMessageBox::warning(this, "提示","连接失败");
    return;
}

void netwindow::fanhui()
{
    qDebug()<<"click()";
    //this->parentWidget()->show();
    //this->close();
}


