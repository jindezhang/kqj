/********************************************************************************
** Form generated from reading UI file 'netwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWINDOW_H
#define UI_NETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>
#include <winbutton.h>

QT_BEGIN_NAMESPACE

class Ui_netwindow
{
public:
    QPushButton *bt_reset;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *IP;
    QLineEdit *PORT;
    QLabel *l_wait;
    winButton *wg_keys;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    top *wg_top;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *status;
    QLabel *old_ip;
    QLabel *label;
    QLabel *old_port;
    QLabel *label_2;

    void setupUi(QWidget *netwindow)
    {
        if (netwindow->objectName().isEmpty())
            netwindow->setObjectName(QStringLiteral("netwindow"));
        netwindow->resize(800, 480);
        bt_reset = new QPushButton(netwindow);
        bt_reset->setObjectName(QStringLiteral("bt_reset"));
        bt_reset->setGeometry(QRect(140, 370, 151, 41));
        verticalLayoutWidget_3 = new QWidget(netwindow);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(100, 260, 241, 101));
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

        l_wait = new QLabel(netwindow);
        l_wait->setObjectName(QStringLiteral("l_wait"));
        l_wait->setGeometry(QRect(30, 420, 321, 31));
        QFont font1;
        font1.setPointSize(12);
        l_wait->setFont(font1);
        wg_keys = new winButton(netwindow);
        wg_keys->setObjectName(QStringLiteral("wg_keys"));
        wg_keys->setGeometry(QRect(400, 240, 395, 220));
        layoutWidget = new QWidget(netwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 801, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        wg_top = new top(layoutWidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));

        horizontalLayout->addWidget(wg_top);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(netwindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 144, 120, 20));
        label_3->setFont(font1);
        status = new QLabel(netwindow);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(216, 144, 71, 21));
        status->setFont(font1);
        old_ip = new QLabel(netwindow);
        old_ip->setObjectName(QStringLiteral("old_ip"));
        old_ip->setGeometry(QRect(216, 172, 171, 21));
        old_ip->setFont(font1);
        label = new QLabel(netwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 172, 120, 20));
        label->setFont(font1);
        old_port = new QLabel(netwindow);
        old_port->setObjectName(QStringLiteral("old_port"));
        old_port->setGeometry(QRect(220, 200, 121, 31));
        old_port->setFont(font1);
        label_2 = new QLabel(netwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 200, 121, 31));
        label_2->setFont(font1);

        retranslateUi(netwindow);

        QMetaObject::connectSlotsByName(netwindow);
    } // setupUi

    void retranslateUi(QWidget *netwindow)
    {
        netwindow->setWindowTitle(QApplication::translate("netwindow", "Form", 0));
        bt_reset->setText(QApplication::translate("netwindow", "\350\277\236\346\216\245\346\226\260\346\234\215\345\212\241\345\231\250", 0));
        IP->setText(QApplication::translate("netwindow", "127.0.0.1", 0));
        PORT->setText(QApplication::translate("netwindow", "50003", 0));
        l_wait->setText(QApplication::translate("netwindow", "\346\255\243\345\234\250\350\277\236\346\216\245\346\226\260\346\234\215\345\212\241\345\231\250....\350\257\267\347\250\215\345\200\231....", 0));
        label_3->setText(QApplication::translate("netwindow", "\347\275\221 \347\273\234  \347\212\266\346\200\201\357\274\232", 0));
        status->setText(QApplication::translate("netwindow", "\346\234\252\350\277\236\346\216\245", 0));
        old_ip->setText(QApplication::translate("netwindow", "null", 0));
        label->setText(QApplication::translate("netwindow", "\346\234\215\345\212\241\345\231\250   IP\357\274\232", 0));
        old_port->setText(QApplication::translate("netwindow", "null", 0));
        label_2->setText(QApplication::translate("netwindow", "\346\234\215\345\212\241\345\231\250port\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class netwindow: public Ui_netwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWINDOW_H
