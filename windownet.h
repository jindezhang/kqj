#ifndef NETWINDOW_H
#define NETWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#include <QMap>
#include <QMessageBox>
#include <QDebug>
#include <netmodel.h>
#include <QString>
#include <QDebug>
#include <QTimer>

namespace Ui {
class netwindow;
}

class netwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit netwindow(QWidget *parent = 0);
    ~netwindow();

private slots:
    void on_bt_reset_clicked();//连接按钮
    void netTimeout();//连接成功的返回
    void netFalse();//连接失败的提示
    void on_pushButton_10_clicked();//键盘删除按键
    void fanhui();
private:
    Ui::netwindow *ui;
    netmodel *net;
    QTimer *netTime;
};

#endif // NETWINDOW_H
