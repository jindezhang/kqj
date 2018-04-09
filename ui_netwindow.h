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

QT_BEGIN_NAMESPACE

class Ui_netwindow
{
public:
    QPushButton *bt_reset;
    QLabel *label_5;
    QPushButton *bt_fanhui;
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

    void setupUi(QWidget *netwindow)
    {
        if (netwindow->objectName().isEmpty())
            netwindow->setObjectName(QStringLiteral("netwindow"));
        netwindow->resize(800, 480);
        bt_reset = new QPushButton(netwindow);
        bt_reset->setObjectName(QStringLiteral("bt_reset"));
        bt_reset->setGeometry(QRect(350, 370, 91, 41));
        label_5 = new QLabel(netwindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 261, 61));
        QFont font;
        font.setPointSize(9);
        label_5->setFont(font);
        bt_fanhui = new QPushButton(netwindow);
        bt_fanhui->setObjectName(QStringLiteral("bt_fanhui"));
        bt_fanhui->setGeometry(QRect(690, 100, 91, 41));
        verticalLayoutWidget = new QWidget(netwindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 170, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(netwindow);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(380, 170, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        status = new QLabel(verticalLayoutWidget_2);
        status->setObjectName(QStringLiteral("status"));
        status->setFont(font1);

        verticalLayout_3->addWidget(status);

        old_ip = new QLabel(verticalLayoutWidget_2);
        old_ip->setObjectName(QStringLiteral("old_ip"));
        old_ip->setFont(font1);

        verticalLayout_3->addWidget(old_ip);

        old_port = new QLabel(verticalLayoutWidget_2);
        old_port->setObjectName(QStringLiteral("old_port"));
        old_port->setFont(font1);

        verticalLayout_3->addWidget(old_port);

        verticalLayoutWidget_3 = new QWidget(netwindow);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(270, 260, 241, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        IP = new QLineEdit(verticalLayoutWidget_3);
        IP->setObjectName(QStringLiteral("IP"));
        IP->setFont(font1);

        verticalLayout_4->addWidget(IP);

        PORT = new QLineEdit(verticalLayoutWidget_3);
        PORT->setObjectName(QStringLiteral("PORT"));
        PORT->setFont(font1);

        verticalLayout_4->addWidget(PORT);


        retranslateUi(netwindow);

        QMetaObject::connectSlotsByName(netwindow);
    } // setupUi

    void retranslateUi(QWidget *netwindow)
    {
        netwindow->setWindowTitle(QApplication::translate("netwindow", "Form", 0));
        bt_reset->setText(QApplication::translate("netwindow", "\350\277\236\346\216\245\346\226\260\346\234\215\345\212\241\345\231\250", 0));
        label_5->setText(QApplication::translate("netwindow", "\344\270\273\347\225\214\351\235\242 >> \350\256\276\347\275\256 >> \347\275\221\347\273\234\350\256\276\347\275\256\357\274\232", 0));
        bt_fanhui->setText(QApplication::translate("netwindow", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", 0));
        label_3->setText(QApplication::translate("netwindow", "\347\275\221 \347\273\234 \347\212\266\346\200\201\357\274\232", 0));
        label->setText(QApplication::translate("netwindow", "\346\234\215\345\212\241\345\231\250  IP\357\274\232", 0));
        label_2->setText(QApplication::translate("netwindow", "\346\234\215\345\212\241\345\231\250port\357\274\232", 0));
        status->setText(QApplication::translate("netwindow", "\346\234\252\350\277\236\346\216\245", 0));
        old_ip->setText(QApplication::translate("netwindow", "null", 0));
        old_port->setText(QApplication::translate("netwindow", "null", 0));
        IP->setText(QApplication::translate("netwindow", "127.0.0.1", 0));
        PORT->setText(QApplication::translate("netwindow", "50003", 0));
    } // retranslateUi

};

namespace Ui {
    class netwindow: public Ui_netwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWINDOW_H
