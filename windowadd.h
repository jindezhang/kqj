#ifndef WINDOWADD_H
#define WINDOWADD_H

#include <QMainWindow>
#include <netmodel.h>
#include <json.h>

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
    void get_rfid(QString rfid);
    void set_add(bool b);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_bt_end_clicked();

private:
    Ui::windowadd *ui;
    netmodel* net;
    QString rfid;
    json jsonc;
};

#endif // WINDOWADD_H
