#ifndef WINDOWSHEZHI_H
#define WINDOWSHEZHI_H

#include <QMainWindow>
#include <windownet.h>
#include <netmodel.h>
#include <QTimer>

namespace Ui {
class windowshezhi;
}

class windowshezhi : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowshezhi(QWidget *parent = 0);
    ~windowshezhi();
public slots:
    void fanhui();
    void set_Enabled(bool b);
    void update_time(QString json);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_bt_reset_clicked();
    void update_out();


private:
    Ui::windowshezhi *ui;
    netwindow* w;
    netmodel* net;
    sqlmodel* sql;
    QTimer* timer;
};

#endif // WINDOWSHEZHI_H
