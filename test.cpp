#include "test.h"
#include "ui_test.h"
#include <QDebug>
#include <QMessageBox>

test::test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
    sql = sqlmodel::get_model();

    model = new QSqlTableModel();
      model->setTable("em_infos");
      model->setEditStrategy(QSqlTableModel::OnManualSubmit);

      model->select();
      //model->setHeaderData(0, Qt::Horizontal, tr("Name"));
      //model->setHeaderData(1, Qt::Horizontal, tr("Salary"));

      ui->table_record->setModel(model);
      //ui->table_record->setColumnWidth(1,20);
      //view->setModel(model);
      //view->hideColumn(0); // don't show the ID
      //view->show();
////    多线程测试
//    mythread = myThread::get_thread();
//    connect(mythread, SIGNAL(send_rfid(int)),this,SLOT(get_thread(int)));
//    mythread->start();
}

test::~test()
{
    delete ui;
}

void test::on_pushButton_clicked()
{
     model->setFilter(QObject::tr("name='a'"));
     model->select();
}
