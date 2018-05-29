#ifndef TOP_H
#define TOP_H

#include <QWidget>
#include <QTimer>
#include <QDate>
#include <QTime>
#include <netmodel.h>

namespace Ui {
class top;
}

//宽度 50

class top : public QWidget
{
    Q_OBJECT

public:
    explicit top(QWidget *parent = 0);
    ~top();
    void setDir(QString dir);
    void hideButton();
    void showButton();
    void button_enable_();
    void button_disable_();
    void is_net();
private slots:
    void myupdate();
    void on_bt_fanhui_clicked();
signals:
    void bt_click();

private:
    Ui::top *ui;
    QTimer *t;
    netmodel *net;
};

#endif // TOP_H
