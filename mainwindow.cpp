#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    net = netmodel::get_net();
    connect(net, SIGNAL(sendStatus(QString)), this, SLOT(get_data(QString)));

    //netTime = new QTimer();
    connect(net, SIGNAL(connect_ok()), this, SLOT(netTimeout()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


