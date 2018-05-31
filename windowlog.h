#ifndef WINDOWLOG_H
#define WINDOWLOG_H

#include <QWidget>
#include <QMainWindow>
#include <QObject>
#include <QStringList>
#include <sqlmodel.h>
#include <QSqlTableModel>
#include <QDebug>
#include <QTime>
#include <QDate>
#include <QString>


//系统日志包含：编号，信息状态，日期，描述，
//目前的名称有网络变化，修改配置数据、硬件情况。

namespace Ui {
class windowlog;
}

class windowlog : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowlog(QWidget *parent = 0);
    ~windowlog();
    void set_Items();
public slots:
    void fanhui();
private slots:
    void on_bt_select_clicked();
    void get_value(QString &value);

private:
    Ui::windowlog *ui;
    sqlmodel* sql;
    QSqlTableModel* model;
};

#endif // WINDOWLOG_H
