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

    //ui->wg_top->hideButton();
    ui->icon->setStyleSheet("border-image:url(./icon.png)");

}

windowstart::~windowstart()
{
    delete ui;
}

void windowstart::fanhui()
{
    this->parentWidget()->show();
    this->close();
}
