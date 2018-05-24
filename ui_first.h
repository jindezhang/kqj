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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <top.h>
#include <winbutton.h>

QT_BEGIN_NAMESPACE

class Ui_first
{
public:
    QWidget *centralwidget;
    QPushButton *bt_connect;
    QPushButton *bt_jump;
    QLabel *tips;
    winButton *wg_keys;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    top *wg_top;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *IP;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *PORT;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *first)
    {
        if (first->objectName().isEmpty())
            first->setObjectName(QStringLiteral("first"));
        first->resize(800, 480);
        centralwidget = new QWidget(first);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        bt_connect = new QPushButton(centralwidget);
        bt_connect->setObjectName(QStringLiteral("bt_connect"));
        bt_connect->setGeometry(QRect(260, 280, 91, 41));
        bt_jump = new QPushButton(centralwidget);
        bt_jump->setObjectName(QStringLiteral("bt_jump"));
        bt_jump->setGeometry(QRect(80, 280, 91, 41));
        tips = new QLabel(centralwidget);
        tips->setObjectName(QStringLiteral("tips"));
        tips->setGeometry(QRect(20, 330, 411, 61));
        QFont font;
        font.setPointSize(15);
        tips->setFont(font);
        wg_keys = new winButton(centralwidget);
        wg_keys->setObjectName(QStringLiteral("wg_keys"));
        wg_keys->setGeometry(QRect(390, 130, 395, 220));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 801, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        wg_top = new top(widget);
        wg_top->setObjectName(QStringLiteral("wg_top"));

        horizontalLayout->addWidget(wg_top);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(51, 151, 269, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        IP = new QLineEdit(widget1);
        IP->setObjectName(QStringLiteral("IP"));
        IP->setFont(font);

        horizontalLayout_2->addWidget(IP);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(51, 194, 269, 29));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        PORT = new QLineEdit(widget2);
        PORT->setObjectName(QStringLiteral("PORT"));
        PORT->setFont(font);

        horizontalLayout_3->addWidget(PORT);

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
        bt_connect->setText(QApplication::translate("first", "\350\277\236\346\216\245", 0));
        bt_jump->setText(QApplication::translate("first", "\350\267\263\350\277\207", 0));
        tips->setText(QString());
        label->setText(QApplication::translate("first", "  IP\357\274\232", 0));
        IP->setText(QApplication::translate("first", "127.0.0.1", 0));
        label_2->setText(QApplication::translate("first", "\347\253\257\345\217\243\357\274\232", 0));
        PORT->setText(QApplication::translate("first", "50003", 0));
    } // retranslateUi

};

namespace Ui {
    class first: public Ui_first {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_H
