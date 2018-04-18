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

private:
    Ui::MainWindow *ui;
    selectforid *s = NULL;
    downloadWindow *d = NULL;
    rulewindow *r = NULL;
};

#endif // MAINWINDOW_H
