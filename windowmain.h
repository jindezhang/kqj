#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <netmodel.h>
#include <QObject>
#include <windownet.h>
#include <windowselectforid.h>
#include <windowdownload.h>
#include <windowrule.h>
#include <windowshezhi.h>
#include <windowadd.h>
#include <windowstart.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:


    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    selectforid *s;
    downloadWindow *d;
    rulewindow *r;
    windowshezhi* she;
    windowadd* add;
    windowstart* start;
};

#endif // MAINWINDOW_H
