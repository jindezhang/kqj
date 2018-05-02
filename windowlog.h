#ifndef WINDOWLOG_H
#define WINDOWLOG_H

#include <QMainWindow>
#include <sqlmodel.h>

//系统日志包含：编号，名称，日期，描述，
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
public slots:
    void fanhui();
private:
    Ui::windowlog *ui;
    sqlmodel* sql;
};

#endif // WINDOWLOG_H
