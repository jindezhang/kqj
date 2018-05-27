#ifndef WINDOWADD_H
#define WINDOWADD_H

#include <QMainWindow>
#include <netmodel.h>
#include <json.h>
#include <mythread.h>
#include <beep.h>

namespace Ui {
class windowadd;
}

class windowadd : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowadd(QWidget *parent = 0);
    ~windowadd();
public slots:
    void fanhui();
    void addstatus(QString status);
    void get_rfid(int rfid);
    void set_add(bool b);
    void bp_ok();//考勤成功的蜂鸣；
    void bp_no();//考勤不成功的蜂鸣；
    void beep_close();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_bt_end_clicked();

private:
    Ui::windowadd *ui;
    netmodel* net;
    Em_info list;
    QString rfid;
    json jsonc;
    myThread* mythread;
    Beep* bp;
    QTimer* qtt;
};

#endif // WINDOWADD_H
