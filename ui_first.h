/********************************************************************************
** Form generated from reading UI file 'first.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_H
#define UI_FIRST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_first
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *IP;
    QLineEdit *PORT;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *bt_connect;
    QPushButton *bt_jump;
    QLabel *tips;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *first)
    {
        if (first->objectName().isEmpty())
            first->setObjectName(QStringLiteral("first"));
        first->resize(800, 480);
        centralwidget = new QWidget(first);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(250, 150, 241, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        IP = new QLineEdit(verticalLayoutWidget_3);
        IP->setObjectName(QStringLiteral("IP"));
        QFont font;
        font.setPointSize(15);
        IP->setFont(font);

        verticalLayout_4->addWidget(IP);

        PORT = new QLineEdit(verticalLayoutWidget_3);
        PORT->setObjectName(QStringLiteral("PORT"));
        PORT->setFont(font);

        verticalLayout_4->addWidget(PORT);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 160, 81, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        bt_connect = new QPushButton(centralwidget);
        bt_connect->setObjectName(QStringLiteral("bt_connect"));
        bt_connect->setGeometry(QRect(400, 290, 91, 41));
        bt_jump = new QPushButton(centralwidget);
        bt_jump->setObjectName(QStringLiteral("bt_jump"));
        bt_jump->setGeometry(QRect(220, 290, 91, 41));
        tips = new QLabel(centralwidget);
        tips->setObjectName(QStringLiteral("tips"));
        tips->setGeometry(QRect(310, 340, 411, 61));
        tips->setFont(font);
        first->setCentralWidget(centralwidget);
        menubar = new QMenuBar(first);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        first->setMenuBar(menubar);
        statusbar = new QStatusBar(first);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        first->setStatusBar(statusbar);

        retranslateUi(first);

        QMetaObject::connectSlotsByName(first);
    } // setupUi

    void retranslateUi(QMainWindow *first)
    {
        first->setWindowTitle(QApplication::translate("first", "MainWindow", 0));
        IP->setText(QApplication::translate("first", "127.0.0.1", 0));
        PORT->setText(QApplication::translate("first", "50003", 0));
        label->setText(QApplication::translate("first", "  IP\357\274\232", 0));
        label_2->setText(QApplication::translate("first", "\347\253\257\345\217\243\357\274\232", 0));
        bt_connect->setText(QApplication::translate("first", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", 0));
        bt_jump->setText(QApplication::translate("first", "\350\267\263\350\277\207", 0));
        tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class first: public Ui_first {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_H
