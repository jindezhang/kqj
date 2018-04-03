#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <netmodel.h>
#include <QObject>
#include <netwindow.h>


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


private:
    Ui::MainWindow *ui;
    netmodel *net;
    QTimer *netTime;
};

#endif // MAINWINDOW_H
