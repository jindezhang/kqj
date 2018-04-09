#ifndef TEST_H
#define TEST_H

#include <QMainWindow>
#include <serialmodel.h>
#include <QTimer>
#include <serialmodel_c.h>
#include <mythread.h>

namespace Ui {
class test;
}

class test : public QMainWindow
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = 0);
    ~test();

private slots:
    void on_bt_jump_clicked();
    void get_data(QByteArray data);
    void com();
    void on_bt_jump_2_clicked();
    void get_thread(int data);

private:
    Ui::test *ui;
    SerialModel *s;
    int flag;
    QTimer *qtimer_send_com;
    serialmodel_C *sc;
    myThread *mythread;

};

#endif // TEST_H
