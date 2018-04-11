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
    void on_bt_reset_clicked();
    void netTimeout();
    void fanhui();

private:
    Ui::netwindow *ui;
    netmodel *net;
};

#endif // NETWINDOW_H
