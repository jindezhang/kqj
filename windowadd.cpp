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

void windowadd::on_pushButton_2_clicked()
{
    ui->id->setText("");
    ui->name->setText("");
    ui->depart->setText("");
    ui->l_tip->setText("请刷卡.....");

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
}
