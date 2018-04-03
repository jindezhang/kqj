#ifndef SELECTFORID_H
#define SELECTFORID_H

#include <QMainWindow>
#include <QTimer>
namespace Ui {
class selectforid;
}

class selectforid : public QMainWindow
{
    Q_OBJECT

public:
    explicit selectforid(QWidget *parent = 0);
    ~selectforid();

private slots:
    void myupdate();
    void on_bt_fanhui_clicked();
    void bt_enable();

    void on_bt_selectdate_clicked();

private:
    Ui::selectforid *ui;
    QTimer *t;
    QTimer *t_select;
};

#endif // SELECTFORID_H
