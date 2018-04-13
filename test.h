#ifndef TEST_H
#define TEST_H

#include <QMainWindow>


#include <sqlmodel.h>
#include <QSqlTableModel>
#include <QDir>

namespace Ui {
class test;
}

class test : public QMainWindow
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = 0);
    ~test();

private slots:


    void on_pushButton_clicked();

private:
    Ui::test *ui;
    sqlmodel *sql;
    QSqlTableModel *model;

};

#endif // TEST_H
