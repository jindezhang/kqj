#include "windowlog.h"
#include "ui_windowlog.h"

windowlog::windowlog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowlog)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("windowlog{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("设置 >> 日志");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

    sql = sqlmodel::get_model();

}

windowlog::~windowlog()
{
    delete ui;
}

void windowlog::fanhui()
{
    this->parentWidget()->show();
    this->close();
}
