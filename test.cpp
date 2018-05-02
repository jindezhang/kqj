#include "test.h"
#include "ui_test.h"
#include <QDebug>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QJsonValue>
#include <QDebug>
#include <allstruct.h>

test::test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
    sql = sqlmodel::get_model();


//    model = new QSqlTableModel();
//      model->setTable("em_infos");
//      model->setEditStrategy(QSqlTableModel::OnManualSubmit);

//      model->select();
//      //model->setHeaderData(0, Qt::Horizontal, tr("Name"));
//      //model->setHeaderData(1, Qt::Horizontal, tr("Salary"));

//      //ui->table_record->setModel(model);
//      //ui->table_record->setColumnWidth(1,20);
//      //view->setModel(model);
//      //view->hideColumn(0); // don't show the ID
//      //view->show();
////    多线程测试
//    mythread = myThread::get_thread();
//    connect(mythread, SIGNAL(send_rfid(int)),this,SLOT(get_thread(int)));
//    mythread->start();

    // 构建 Json 对象
    QJsonObject json;
    json.insert("Name", "Qt");
    json.insert("Company", "Digia");
    json.insert("Name", "00");
    json.insert("Company", "cccc");

    // 构建 Json 文档
    QJsonDocument document;
    document.setObject(json);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray);

    //qDebug() << strJson;

    QJsonObject data;//记录对象
    QJsonArray arr;
    QJsonObject obj;//json对象
    QJsonDocument doc;//json文档

   QString tmp;
   for(int i = 0;i<3;i++){
       tmp = QString("00%1").arg(i);
       data.insert("id",tmp);
       data.insert("name","ddd");

       arr.append(QJsonValue(data));

    }
   obj.insert("comm","hh");

   obj.insert("data",QJsonValue(arr));
    doc.setObject(obj);
    QByteArray byteArra = doc.toJson(QJsonDocument::Compact);
    QString strJso(byteArra);
   // qDebug()<<"st:"<<strJso;

    //bp = Beep::get_beep();
   qtt = new QTimer();
   connect(qtt, SIGNAL(timeout()), this, SLOT(beep_close()));

}

test::~test()
{
    delete ui;
}

void test::beep_close()
{
    qtt->stop();
   // bp->close_Beep();
}

void test::on_pushButton_clicked()
{
//     model->setFilter(QObject::tr("name='a'"));
//     model->select();
   // bp->start_Beep();
}

void test::on_pushButton_2_clicked()
{
    //bp->close_Beep();
}

void test::on_pushButton_3_clicked()
{
   // bp->start_Beep();
    qtt->start(100);
}

void test::on_pushButton_4_clicked()
{
    //bp->start_Beep();
    qtt->start(1000);
}

void test::on_pushButton_5_clicked()
{
    //date -s 2018-1-30
//    date -s 14:26
    QString d = "date -s 2018-12-12";
    QString t = "date -s 14:14";

    system(d.toLatin1().data());
    system(t.toLatin1().data());

}
