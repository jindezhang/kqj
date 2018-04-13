
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
    //downloadWindow w ;
    //w.show();

    QString path = "D:/aaaa";
    QDir dir(path);
    if(!dir.exists())
        dir.mkdir(path);
    QString filename;
    filename = QString("%1/data.txt").arg(path);
    //path.append("/data.txt");
    int i = 1;
    while(check((filename))){
        filename.clear();
        filename = QString("%1/data_%2.txt").arg(path).arg(i);
        i++;
    }
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug()<<"open failed";
    }

    QString str = "name";
    for(int i = str.size(); i < 10;i++){
        str.append(" ");
    }
    QByteArray data = str.toLatin1();
    str.clear();
    str = "id";
    for(int i = str.size(); i < 10;i++){
        str.append(" ");
    }
    data.append(str);
    file.write(data);
    file.close();
    //return a.exec();
}

