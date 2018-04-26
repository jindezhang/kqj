#include "windowadd.h"
#include "ui_windowadd.h"

windowadd::windowadd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowadd)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("downloadWindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("添加员工");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));
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
