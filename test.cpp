#include "test.h"
#include "ui_test.h"
#include <QDebug>
#include <QMessageBox>

test::test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);

    //s = new SerialModel();
    flag = 0;
    //connect(s,SIGNAL(rfid_data(QByteArray)),this,SLOT(get_data(QByteArray)));

    qtimer_send_com = new QTimer();
    connect(qtimer_send_com,SIGNAL(timeout()),this,SLOT(com()));
    qDebug()<<"test ";
   // qtimer_send_com->start(500);


//    多线程测试
    mythread = myThread::get_thread();
    connect(mythread, SIGNAL(send_rfid(int)),this,SLOT(get_thread(int)));
    mythread->start();
}

test::~test()
{
    delete ui;
}

void test::on_bt_jump_clicked()
{
//    int fd = sc->init_R1();
//    QString s = QString("%1").arg(sc->get_RFID(fd));
//    ui->IP->setText(s);
}

void test::get_data(QByteArray data)
{
    qDebug()<<"get_data:"<<flag;
    char *id = data.data();
     if(id[2] == 0x00 && flag == 0)
     {
         //qDebug()<<"read rfid ok :";
         qDebug()<<id[3];
         //qtimer_send_com->start(500);
         flag = 1;
         return;
     }
     if(id[2] == 0x00){
        qDebug()<<"read 2 ok"<<data.data();
        flag = 0;
        int cardid;
        if(id[2] == 0x00)
        {
            int i, j;
            for(i=id[3]-1, j=0; i>=0; i--, j++)
            {
                memcpy((char *)&cardid+j, &id[4+i], 1);
            }
            printf("i:%d\n",id[3]-1);
        }
        ui->IP->setText(QString::number(cardid, 16));
        //qDebug()<<"rfid:"<<rfid.toHex();
     }
}

void test::com()
{
    //s->rfid_write(1);
    //qtimer_send_com->stop();
}


void test::on_bt_jump_2_clicked()
{
    QMessageBox::warning(this,"hh","??");
    //mythread->start();
}

void test::get_thread(int data)
{


    QString s = QString("%1").arg(data);
    ui->PORT->setText(s);
}
