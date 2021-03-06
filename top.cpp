#include "top.h"
#include "ui_top.h"

top::top(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::top)
{

    ui->setupUi(this);
    setStyleSheet("selectforid{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->l_net->setStyleSheet("border-image:url(./wifion.png)");//显示自定义图片
    t = new QTimer();
    connect(t, SIGNAL(timeout()),this,SLOT(myupdate()));
    t->start(1000);
    net = netmodel::get_net();
    if(net->get_flag())
        ui->l_net->setStyleSheet("border-image:url(./wifion.png)");//显示自定义图片
    else
        ui->l_net->setStyleSheet("border-image:url(./wifioff.png)");//显示自定义图片
}

top::~top()
{
    delete ui;

}

void top::setDir(QString dir)
{
    QString str = QString("主界面 >> %1").arg(dir);
    ui->l_dir->setText(str);
}

void top::myupdate()
{
    ui->l_date->setText(QDate::currentDate().toString("yyyy-MM-dd"));
    ui->l_time->setText(QTime::currentTime().toString("hh:mm:ss"));
    is_net();
}

void top::hideButton()
{
    ui->bt_fanhui->hide();
}

void top::showButton()
{
    ui->bt_fanhui->show();
}

void top::button_enable_()
{
    ui->bt_fanhui->setEnabled(true);
}

void top::button_disable_()
{
    ui->bt_fanhui->setEnabled(false);
}

void top::is_net()
{
    if(net->get_flag())
        ui->l_net->setStyleSheet("border-image:url(./wifion.png)");//显示自定义图片
    else
        ui->l_net->setStyleSheet("border-image:url(./wifioff.png)");//显示自定义图片
}

void top::on_bt_fanhui_clicked()
{
    emit bt_click();
}
