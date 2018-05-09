#ifndef WINDOWSTART_H
#define WINDOWSTART_H

#include <QMainWindow>
#include <netmodel.h>
#include <sqlmodel.h>
#include <json.h>
#include <QTimer>

namespace Ui {
class windowstart;
}

class windowstart : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowstart(QWidget *parent = 0);
    ~windowstart();
    void kq_ok();
    void kq_no();
    void kq_ed();
    void kq_err();
    void get_rfid();
    void mycontrll();
public slots:
    void fanhui();

private slots:
    void get_em(QString json);
    void post_ems(QString json);
    void get_over(QString json);
    void on_bt_card_clicked();
    void clean_ui();
private:
    Ui::windowstart *ui;
    netmodel* net;
    sqlmodel* sql;
    json jsonc;
    QTimer* t_clean;
    QTimer* t_contrll;
    QString myrfid;
    QStringList rfid_out;//已经考勤了的。
    QStringList rfid_in;//还没考勤的。
};

#endif // WINDOWSTART_H
