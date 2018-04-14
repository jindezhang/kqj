
#include <QApplication>

#include "first.h"
#include <sqlmodel.h>
#include <QDebug>
#include <selectforid.h>
#include <serialmodel.h>
#include <test.h>
#include <downloadwindow.h>
#include <QString>
#include <QByteArray>

#include <QFile>
#include <QDir>

bool check(QString filename)
{
    QFile file(filename);
    if(file.exists()){
        return true;
    }
    return false;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    first w ;
    w.show();


    return a.exec();
}

