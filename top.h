#ifndef TOP_H
#define TOP_H

#include <QWidget>
#include <QTimer>
#include <QDate>
#include <QTime>

namespace Ui {
class top;
}

class top : public QWidget
{
    Q_OBJECT

public:
    explicit top(QWidget *parent = 0);
    ~top();
    void setDir(QString dir);
    void hideButton();
private slots:
    void myupdate();
    void on_bt_fanhui_clicked();
signals:
    void bt_click();

private:
    Ui::top *ui;
    QTimer *t;
};

#endif // TOP_H
