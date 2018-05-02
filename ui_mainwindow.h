/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *l_down;
    QLabel *l_shezhi;
    QLabel *l_add;
    QLabel *l_search;
    QLabel *l_rule;
    QLabel *l_start;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    top *wg_top;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        l_down = new QLabel(centralWidget);
        l_down->setObjectName(QStringLiteral("l_down"));
        l_down->setGeometry(QRect(340, 170, 80, 80));
        l_down->setMinimumSize(QSize(80, 80));
        l_down->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        l_shezhi = new QLabel(centralWidget);
        l_shezhi->setObjectName(QStringLiteral("l_shezhi"));
        l_shezhi->setGeometry(QRect(160, 170, 80, 80));
        l_shezhi->setMinimumSize(QSize(80, 80));
        l_shezhi->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        l_add = new QLabel(centralWidget);
        l_add->setObjectName(QStringLiteral("l_add"));
        l_add->setGeometry(QRect(520, 170, 80, 80));
        l_add->setMinimumSize(QSize(80, 80));
        l_add->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        l_search = new QLabel(centralWidget);
        l_search->setObjectName(QStringLiteral("l_search"));
        l_search->setGeometry(QRect(160, 300, 80, 80));
        l_search->setMinimumSize(QSize(80, 80));
        l_search->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        l_rule = new QLabel(centralWidget);
        l_rule->setObjectName(QStringLiteral("l_rule"));
        l_rule->setGeometry(QRect(340, 300, 80, 80));
        l_rule->setMinimumSize(QSize(80, 80));
        l_rule->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        l_start = new QLabel(centralWidget);
        l_start->setObjectName(QStringLiteral("l_start"));
        l_start->setGeometry(QRect(520, 300, 80, 80));
        l_start->setMinimumSize(QSize(80, 80));
        l_start->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 260, 91, 31));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 260, 91, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 390, 91, 31));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 390, 91, 31));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(520, 260, 91, 31));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(340, 390, 91, 31));
        pushButton_6->setFont(font);
        wg_top = new top(centralWidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        l_down->setText(QString());
        l_shezhi->setText(QString());
        l_add->setText(QString());
        l_search->setText(QString());
        l_rule->setText(QString());
        l_start->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\270\213\350\275\275", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\350\200\203\345\213\244", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\200\203\345\213\244\346\237\245\350\257\242", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\221\230\345\267\245", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\200\203\345\213\244\350\247\204\345\210\231", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
