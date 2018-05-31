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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_windowshezhi
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *l_tips;
    QPushButton *bt_reset;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    top *wg_top;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *windowshezhi)
    {
        if (windowshezhi->objectName().isEmpty())
            windowshezhi->setObjectName(QStringLiteral("windowshezhi"));
        windowshezhi->resize(800, 480);
        centralwidget = new QWidget(windowshezhi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 110, 141, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 190, 141, 61));
        l_tips = new QLabel(centralwidget);
        l_tips->setObjectName(QStringLiteral("l_tips"));
        l_tips->setGeometry(QRect(480, 370, 301, 51));
        QFont font;
        font.setPointSize(9);
        l_tips->setFont(font);
        bt_reset = new QPushButton(centralwidget);
        bt_reset->setObjectName(QStringLiteral("bt_reset"));
        bt_reset->setGeometry(QRect(330, 370, 141, 61));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 280, 141, 61));
        layoutWidget = new QWidget(centralwidget);
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

        windowshezhi->setCentralWidget(centralwidget);

        retranslateUi(windowshezhi);

        QMetaObject::connectSlotsByName(windowshezhi);
    } // setupUi

    void retranslateUi(QMainWindow *windowshezhi)
    {
        windowshezhi->setWindowTitle(QApplication::translate("windowshezhi", "MainWindow", 0));
        pushButton->setText(QApplication::translate("windowshezhi", "\346\233\264\346\226\260\347\263\273\347\273\237\346\227\266\351\227\264", 0));
        pushButton_2->setText(QApplication::translate("windowshezhi", "\350\256\276\347\275\256\346\234\215\345\212\241\345\231\250", 0));
        l_tips->setText(QString());
        bt_reset->setText(QApplication::translate("windowshezhi", "\351\207\215\347\275\256\347\263\273\347\273\237", 0));
        pushButton_3->setText(QApplication::translate("windowshezhi", "\346\237\245\347\234\213\347\263\273\347\273\237\346\227\245\345\277\227", 0));
    } // retranslateUi

};

namespace Ui {
    class windowshezhi: public Ui_windowshezhi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSHEZHI_H
