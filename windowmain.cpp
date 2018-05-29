#include "windowmain.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setStyleSheet("MainWindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->hideButton();

    ui->l_rule->setStyleSheet("border-image:url(./rule.png)");
    ui->l_add->setStyleSheet("border-image:url(./add.png)");
    ui->l_down->setStyleSheet("border-image:url(./down.png)");
    ui->l_search->setStyleSheet("border-image:url(./search.png)");
    ui->l_shezhi->setStyleSheet("border-image:url(./shezhi.png)");
    ui->l_start->setStyleSheet("border-image:url(./start.png)");

    s = NULL;
    d = NULL;
    start = NULL;
    r = NULL;
    she = NULL;
    add = NULL;

    net = netmodel::get_net();

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

void MainWindow::on_pushButton_clicked()
{

    if(NULL == she)
        she = new windowshezhi(this);
    she->show();
    this->hide();
}

void MainWindow::on_pushButton_5_clicked()
{

    if(net->get_flag() == 0){
        QMessageBox::warning(this,"提示", "未连接服务，无法使用该功能。");
        return;
    }

    if(NULL == add){
        add = new windowadd(this);
    }
    add->show();
    this->hide();
}

void MainWindow::on_pushButton_3_clicked()
{

    if(NULL == start)
        start = new windowstart(this);
    start->show();
    this->hide();
}
