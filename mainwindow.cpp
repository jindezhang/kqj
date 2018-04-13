#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setStyleSheet("MainWindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->hideButton();



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_4_clicked()
{
    if(NULL == s)
        s= new selectforid(this);//把主界面指针传给灯光控制界面，（返回处理， 使用主界面数据）
    s->show();
    this->hide();
}
