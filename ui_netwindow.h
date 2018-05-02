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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>
#include <winbutton.h>

QT_BEGIN_NAMESPACE

class Ui_netwindow
{
public:
    QPushButton *bt_reset;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *status;
    QLabel *old_ip;
    QLabel *old_port;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *IP;
    QLineEdit *PORT;
    top *wg_top;
    QLabel *l_wait;
    winButton *wg_keys;

    void setupUi(QWidget *netwindow)
    {
        if (netwindow->objectName().isEmpty())
            netwindow->setObjectName(QStringLiteral("netwindow"));
        netwindow->resize(800, 480);
        bt_reset = new QPushButton(netwindow);
        bt_reset->setObjectName(QStringLiteral("bt_reset"));
        bt_reset->setGeometry(QRect(180, 370, 91, 41));
        verticalLayoutWidget = new QWidget(netwindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 170, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(15);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(netwindow);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(210, 170, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        status = new QLabel(verticalLayoutWidget_2);
        status->setObjectName(QStringLiteral("status"));
        status->setFont(font);

        verticalLayout_3->addWidget(status);

        old_ip = new QLabel(verticalLayoutWidget_2);
        old_ip->setObjectName(QStringLiteral("old_ip"));
        old_ip->setFont(font);

        verticalLayout_3->addWidget(old_ip);

        old_port = new QLabel(verticalLayoutWidget_2);
        old_port->setObjectName(QStringLiteral("old_port"));
        old_port->setFont(font);

        verticalLayout_3->addWidget(old_port);

        verticalLayoutWidget_3 = new QWidget(netwindow);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(100, 260, 241, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        IP = new QLineEdit(verticalLayoutWidget_3);
        IP->setObjectName(QStringLiteral("IP"));
        IP->setFont(font);

        verticalLayout_4->addWidget(IP);

        PORT = new QLineEdit(verticalLayoutWidget_3);
        PORT->setObjectName(QStringLiteral("PORT"));
        PORT->setFont(font);

        verticalLayout_4->addWidget(PORT);

        wg_top = new top(netwindow);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        l_wait = new QLabel(netwindow);
        l_wait->setObjectName(QStringLiteral("l_wait"));
        l_wait->setGeometry(QRect(90, 420, 291, 21));
        l_wait->setFont(font);
        wg_keys = new winButton(netwindow);
        wg_keys->setObjectName(QStringLiteral("wg_keys"));
        wg_keys->setGeometry(QRect(400, 240, 395, 220));

        retranslateUi(netwindow);

        QMetaObject::connectSlotsByName(netwindow);
    } // setupUi

    void retranslateUi(QWidget *netwindow)
    {
        netwindow->setWindowTitle(QApplication::translate("netwindow", "Form", 0));
        bt_reset->setText(QApplication::translate("netwindow", "\350\277\236\346\216\245\346\226\260\346\234\215\345\212\241\345\231\250", 0));
        label_3->setText(QApplication::translate("netwindow", "\347\275\221 \347\273\234 \347\212\266\346\200\201\357\274\232", 0));
        label->setText(QApplication::translate("netwindow", "\346\234\215\345\212\241\345\231\250  IP\357\274\232", 0));
        label_2->setText(QApplication::translate("netwindow", "\346\234\215\345\212\241\345\231\250port\357\274\232", 0));
        status->setText(QApplication::translate("netwindow", "\346\234\252\350\277\236\346\216\245", 0));
        old_ip->setText(QApplication::translate("netwindow", "null", 0));
        old_port->setText(QApplication::translate("netwindow", "null", 0));
        IP->setText(QApplication::translate("netwindow", "127.0.0.1", 0));
        PORT->setText(QApplication::translate("netwindow", "50003", 0));
        l_wait->setText(QApplication::translate("netwindow", "\346\255\243\345\234\250\350\277\236\346\216\245\346\226\260\346\234\215\345\212\241\345\231\250....\350\257\267\347\250\215\345\200\231....", 0));
    } // retranslateUi

};

namespace Ui {
    class netwindow: public Ui_netwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWINDOW_H
