#include "windowmain.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setStyleSheet("MainWindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->hideButton();

    s = NULL;
    d = NULL;
    r = NULL;

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

void MainWindow::on_pushButton_2_clicked()
{
    if(NULL == d)
        d= new downloadWindow(this);//把主界面指针传给灯光控制界面，（返回处理， 使用主界面数据）
    d->show();
    this->hide();
}

void MainWindow::on_pushButton_6_clicked()
{
    if(NULL == r)
        r= new rulewindow(this);//把主界面指针传给灯光控制界面，（返回处理， 使用主界面数据）
    r->show();
    this->hide();
}
