#ifndef FIRST_H
#define FIRST_H

#include <QMainWindow>
#include <QDebug>
#include <netmodel.h>
#include <QTime>
#include <windowmain.h>
#include <QMessageBox>
#include <QObject>
#include <sqlmodel.h>
#include <allstruct.h>

namespace Ui {
class first;
}

class first : public QMainWindow
{
    Q_OBJECT

public:
    explicit first(QWidget *parent = 0);
    ~first();

private slots:
    void del();
    void on_bt_connect_clicked();
    void net_connect_ok();
    void net_timeout();
    void showdata(Net data);
    void on_bt_jump_clicked();

private:
    Ui::first *ui;
    netmodel *net;
    QTimer *nettimer;
    sqlmodel *sl;
};

#endif // FIRST_H
