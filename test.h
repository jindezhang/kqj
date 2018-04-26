#ifndef TEST_H
#define TEST_H

#include <QMainWindow>

#include <beep.h>

#include <sqlmodel.h>
#include <QSqlTableModel>
#include <QDir>
#include <QTimer>

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

    void beep_close();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::test *ui;
    sqlmodel *sql;
    QSqlTableModel *model;
    QTimer* qtt;
    Beep* bp;
};

#endif // TEST_H
