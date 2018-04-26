
#include <QApplication>

#include "first.h"
#include <sqlmodel.h>
#include <QDebug>
#include <windowselectforid.h>
#include <serialmodel.h>
#include <test.h>
#include <windowdownload.h>
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
    test w ;
    w.show();


    return a.exec();
}

