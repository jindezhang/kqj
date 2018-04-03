#include "first.h"
#include "ui_first.h"
#include <sqlmodel.h>

first::first(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::first)
{
    qDebug()<<"netwindow()";

    sl.doConnect("kqj.db");
    connect(&sl,SIGNAL(sendData(Net)), this, SLOT(showdata(Net)));

    ui->setupUi(this);
    net = netmodel::get_net();
    connect(net, SIGNAL(connect_ok()), this, SLOT(net_connect_ok()));

    nettimer = new QTimer();
    connect(nettimer,SIGNAL(timeout()),this, SLOT(net_timeout()));

    sl.sql_select("net");

}

first::~first()
{
    delete nettimer;
    delete ui;
}



void first::on_bt_connect_clicked()
{
    QString ip = ui->IP->text();
    QString port = ui->PORT->text();
    if(ip.isEmpty() || port.isEmpty())
    {
        QMessageBox::warning(this, "提示","请输入服务器IP或端口号");

        return ;
    }
    net->connect_toserver(ip, port.toInt());
    ui->bt_connect->setEnabled(false);
    ui->tips->setText("请稍后，正在连接.....");
    nettimer->start(5000);
}

void first::net_connect_ok()
{
    nettimer->stop();
    MainWindow *main = new MainWindow();
    main->show();
    this->close();
}

void first::net_timeout()
{
    ui->bt_connect->setEnabled(true);
    ui->tips->setText(" ");
    nettimer->stop();
    QMessageBox::warning(this, "提示","连接失败！！！");
}

void first::showdata(Net data)
{
    ui->IP->setText(data.ip);
    ui->PORT->setText(data.port);
}

void first::on_bt_jump_clicked()
{
    MainWindow *main = new MainWindow();
    main->show();

    this->close();
}
