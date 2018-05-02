/********************************************************************************
** Form generated from reading UI file 'windowlog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLOG_H
#define UI_WINDOWLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_windowlog
{
public:
    QWidget *centralwidget;
    top *wg_top;

    void setupUi(QMainWindow *windowlog)
    {
        if (windowlog->objectName().isEmpty())
            windowlog->setObjectName(QStringLiteral("windowlog"));
        windowlog->resize(800, 480);
        centralwidget = new QWidget(windowlog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wg_top = new top(centralwidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        wg_top->setMinimumSize(QSize(800, 50));
        windowlog->setCentralWidget(centralwidget);

        retranslateUi(windowlog);

        QMetaObject::connectSlotsByName(windowlog);
    } // setupUi

    void retranslateUi(QMainWindow *windowlog)
    {
        windowlog->setWindowTitle(QApplication::translate("windowlog", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class windowlog: public Ui_windowlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLOG_H
