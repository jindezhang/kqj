#ifndef RULEWINDOW_H
#define RULEWINDOW_H

#include <QMainWindow>
#include <sqlmodel.h>
#include <QSqlTableModel>
#include <allstruct.h>

namespace Ui {
class rulewindow;
}

class rulewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit rulewindow(QWidget *parent = 0);
    ~rulewindow();
    void removeALLcbb();
public slots:
    void fanhui();

private slots:
    void on_bt_del_clicked();

    void on_bt_change_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::rulewindow *ui;
    sqlmodel *sql;
    QSqlTableModel *model;
    QStringList list_rule;
    QString curr_rule;

};

#endif // RULEWINDOW_H
