#include "downloadwindow.h"
#include "ui_downloadwindow.h"

downloadWindow::downloadWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::downloadWindow)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("downloadWindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("下载");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));
}

downloadWindow::~downloadWindow()
{
    delete ui;
}

void downloadWindow::fanhui()
{
    this->parentWidget()->show();
    this->close();
}

void downloadWindow::on_cb_all_clicked(bool checked)
{
    bt_enable(!checked);
}

void downloadWindow::bt_enable(bool state)
{
    ui->cb_date->setChecked(state);
    ui->cb_date->setEnabled(state);
    ui->cb_depart->setChecked(state);
    ui->cb_depart->setEnabled(state);
}
