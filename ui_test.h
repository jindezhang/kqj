/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    top *wg_top;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QStringLiteral("test"));
        test->resize(800, 600);
        centralwidget = new QWidget(test);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 230, 75, 23));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(600, 190, 120, 80));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(30, 20, 89, 16));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 40, 89, 16));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 60, 89, 16));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 260, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 300, 75, 23));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 330, 75, 23));
        wg_top = new top(centralwidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        wg_top->setMinimumSize(QSize(800, 0));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 230, 75, 23));
        test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(test);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        test->setMenuBar(menubar);
        statusbar = new QStatusBar(test);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        test->setStatusBar(statusbar);

        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QMainWindow *test)
    {
        test->setWindowTitle(QApplication::translate("test", "MainWindow", 0));
        pushButton->setText(QApplication::translate("test", "\346\211\223\345\274\200", 0));
        groupBox->setTitle(QApplication::translate("test", "GroupBox", 0));
        radioButton->setText(QApplication::translate("test", "RadioButton", 0));
        radioButton_2->setText(QApplication::translate("test", "RadioButton", 0));
        radioButton_3->setText(QApplication::translate("test", "RadioButton", 0));
        pushButton_2->setText(QApplication::translate("test", "\345\205\263\351\227\255", 0));
        pushButton_3->setText(QApplication::translate("test", "\346\210\220\345\212\237", 0));
        pushButton_4->setText(QApplication::translate("test", "\345\244\261\350\264\245", 0));
        pushButton_5->setText(QApplication::translate("test", "system", 0));
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
