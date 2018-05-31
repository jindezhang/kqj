#ifndef SELECTFORID_H
#define SELECTFORID_H

#include <QMainWindow>
#include <QTimer>
#include <sqlmodel.h>
#include <QSqlTableModel>
#include <QStringList>

namespace Ui {
class selectforid;
}

//使用tableview 和qsqltablemodel 来实现数据的显示
class selectforid : public QMainWindow
{
    Q_OBJECT

public:
    explicit selectforid(QWidget *parent = 0);
    ~selectforid();
    void set_Items();//获取可查询的条件
private slots:
    void fanhui();
    void bt_enable();

    void on_bt_selectdate_clicked();

    void on_cb_am_clicked(bool checked);

    void on_cb_pm_clicked(bool checked);

    void on_cb_nm_clicked(bool checked);

private:
    Ui::selectforid *ui;
    QTimer *t;
    QTimer *t_select;
    sqlmodel *sql;
    QSqlTableModel *model;
    //QStringList list_departmet;
};

#endif // SELECTFORID_H
