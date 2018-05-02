/********************************************************************************
** Form generated from reading UI file 'windowshezhi.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSHEZHI_H
#define UI_WINDOWSHEZHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_windowshezhi
{
public:
    QWidget *centralwidget;
    top *wg_top;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *windowshezhi)
    {
        if (windowshezhi->objectName().isEmpty())
            windowshezhi->setObjectName(QStringLiteral("windowshezhi"));
        windowshezhi->resize(800, 480);
        centralwidget = new QWidget(windowshezhi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wg_top = new top(centralwidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        wg_top->setMinimumSize(QSize(800, 0));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 110, 101, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 190, 101, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 280, 101, 51));
        windowshezhi->setCentralWidget(centralwidget);

        retranslateUi(windowshezhi);

        QMetaObject::connectSlotsByName(windowshezhi);
    } // setupUi

    void retranslateUi(QMainWindow *windowshezhi)
    {
        windowshezhi->setWindowTitle(QApplication::translate("windowshezhi", "MainWindow", 0));
        pushButton->setText(QApplication::translate("windowshezhi", "\346\233\264\346\226\260\347\263\273\347\273\237\346\227\266\351\227\264", 0));
        pushButton_2->setText(QApplication::translate("windowshezhi", "\350\256\276\347\275\256\346\234\215\345\212\241\345\231\250", 0));
        pushButton_3->setText(QApplication::translate("windowshezhi", "\346\237\245\347\234\213\347\263\273\347\273\237\346\227\245\345\277\227", 0));
    } // retranslateUi

};

namespace Ui {
    class windowshezhi: public Ui_windowshezhi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSHEZHI_H
