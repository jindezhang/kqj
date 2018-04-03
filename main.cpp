#include "first.h"
#include <QApplication>
#include <sqlmodel.h>
#include <QDebug>
#include <selectforid.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    selectforid w ;
    w.show();
    return a.exec();
}
