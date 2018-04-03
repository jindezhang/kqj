#include "selectforid.h"
#include "ui_selectforid.h"
#include <QDebug>
#include <QTime>
#include <QDate>
#include <QString>

selectforid::selectforid(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectforid)
{
    ui->setupUi(this);
    setStyleSheet("selectforid{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->l_net->setStyleSheet("border-image:url(./wifion.png)");

    //右上角时间
    t = new QTimer();
    connect(t, SIGNAL(timeout()),this,SLOT(myupdate()));
    t->start(1000);



    //查询按钮的时间延时。
    t_select = new QTimer();
    connect(t_select,SIGNAL(timeout()),this,SLOT(bt_enable()));

    QString PaperName,KeyWord,PaperBrief;
    PaperName="fjd";
    KeyWord="hh";
    PaperBrief="gg";

    int RowCont;
    RowCont=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(RowCont);//增加一行

    //插入元素
    ui->tableWidget->setItem(RowCont,0,new QTableWidgetItem(PaperName));
    ui->tableWidget->setItem(RowCont,1,new QTableWidgetItem(KeyWord));
    ui->tableWidget->setItem(RowCont,2,new QTableWidgetItem(PaperBrief));

    RowCont=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(RowCont);//增加一行

    //插入元素
    ui->tableWidget->setItem(RowCont,0,new QTableWidgetItem(PaperName));
    ui->tableWidget->setItem(RowCont,1,new QTableWidgetItem(KeyWord));
    ui->tableWidget->setItem(RowCont,2,new QTableWidgetItem(PaperBrief));

    //隐藏某一列
    ui->tableWidget->hideColumn(0);
    //设置table的列宽。
    ui->tableWidget->setColumnWidth(0,40);

    //获取选中的值
   // qDebug()<<ui->comboBox->currentText();
    QStringList list;
    list<<"人事部"<<"技术部";
    ui->cbb_depart->addItems(list);

}

selectforid::~selectforid()
{
    delete t;
    delete t_select;
    delete ui;
}

void selectforid::myupdate()
{
    ui->l_date->setText(QDate::currentDate().toString("yyyy-MM-dd"));
    ui->l_time->setText(QTime::currentTime().toString("hh:mm:ss"));

    qDebug()<<QTime::currentTime().toString("hh:mm");
}

void selectforid::on_bt_fanhui_clicked()
{

}

void selectforid::bt_enable()
{
    t_select->stop();
    ui->bt_selectdate->setEnabled(true);
       ui->l_tip->setText(" ");
}

void selectforid::on_bt_selectdate_clicked()
{
    t_select->start(1000*3);
    ui->bt_selectdate->setEnabled(false);
    ui->l_tip->setText("正在查询，请稍后.....");
}
