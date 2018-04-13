#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <netmodel.h>
#include <QObject>
#include <netwindow.h>
#include <selectforid.h>

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

private:
    Ui::MainWindow *ui;
    selectforid *s = NULL;
};

#endif // MAINWINDOW_H
