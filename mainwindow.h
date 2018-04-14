#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <netmodel.h>
#include <QObject>
#include <netwindow.h>
#include <selectforid.h>
#include <downloadwindow.h>

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

private:
    Ui::MainWindow *ui;
    selectforid *s = NULL;
    downloadWindow *d = NULL;
};

#endif // MAINWINDOW_H
