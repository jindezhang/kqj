#include "first.h"
#include <QApplication>
#include <sqlmodel.h>
#include <QDebug>
#include <selectforid.h>
#include <serialmodel.h>
#include <test.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test w ;
    w.show();

    return a.exec();
}
