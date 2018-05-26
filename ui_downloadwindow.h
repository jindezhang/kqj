/********************************************************************************
** Form generated from reading UI file 'downloadwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADWINDOW_H
#define UI_DOWNLOADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_downloadWindow
{
public:
    QWidget *centralwidget;
    QLabel *l_tip;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    top *wg_top;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbb_year;
    QComboBox *cbb_month;
    QComboBox *cbb_day;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbb_depart;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cb_all;
    QCheckBox *cb_date;
    QCheckBox *cb_depart;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bt_down;

    void setupUi(QMainWindow *downloadWindow)
    {
        if (downloadWindow->objectName().isEmpty())
            downloadWindow->setObjectName(QStringLiteral("downloadWindow"));
        downloadWindow->resize(800, 480);
        centralwidget = new QWidget(downloadWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        l_tip = new QLabel(centralwidget);
        l_tip->setObjectName(QStringLiteral("l_tip"));
        l_tip->setGeometry(QRect(200, 340, 311, 61));
        QFont font;
        font.setPointSize(12);
        l_tip->setFont(font);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 801, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        wg_top = new top(layoutWidget_2);
        wg_top->setObjectName(QStringLiteral("wg_top"));

        horizontalLayout_3->addWidget(wg_top);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 130, 491, 111));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        cbb_year = new QComboBox(widget);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setFont(font);

        horizontalLayout_2->addWidget(cbb_year);

        cbb_month = new QComboBox(widget);
        cbb_month->setObjectName(QStringLiteral("cbb_month"));
        cbb_month->setFont(font);

        horizontalLayout_2->addWidget(cbb_month);

        cbb_day = new QComboBox(widget);
        cbb_day->setObjectName(QStringLiteral("cbb_day"));
        cbb_day->setFont(font);

        horizontalLayout_2->addWidget(cbb_day);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        cbb_depart = new QComboBox(widget);
        cbb_depart->setObjectName(QStringLiteral("cbb_depart"));
        QFont font1;
        font1.setPointSize(13);
        cbb_depart->setFont(font1);

        horizontalLayout_4->addWidget(cbb_depart);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(100, 250, 591, 91));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(widget1);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(13, 35, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cb_all = new QCheckBox(widget1);
        cb_all->setObjectName(QStringLiteral("cb_all"));
        cb_all->setFont(font);

        horizontalLayout->addWidget(cb_all);

        cb_date = new QCheckBox(widget1);
        cb_date->setObjectName(QStringLiteral("cb_date"));
        cb_date->setFont(font);

        horizontalLayout->addWidget(cb_date);

        cb_depart = new QCheckBox(widget1);
        cb_depart->setObjectName(QStringLiteral("cb_depart"));
        cb_depart->setFont(font);

        horizontalLayout->addWidget(cb_depart);

        horizontalSpacer_2 = new QSpacerItem(13, 35, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bt_down = new QPushButton(widget1);
        bt_down->setObjectName(QStringLiteral("bt_down"));
        bt_down->setFont(font);

        horizontalLayout->addWidget(bt_down);


        verticalLayout->addLayout(horizontalLayout);

        downloadWindow->setCentralWidget(centralwidget);
        l_tip->raise();
        layoutWidget_2->raise();

        retranslateUi(downloadWindow);

        QMetaObject::connectSlotsByName(downloadWindow);
    } // setupUi

    void retranslateUi(QMainWindow *downloadWindow)
    {
        downloadWindow->setWindowTitle(QApplication::translate("downloadWindow", "MainWindow", 0));
        l_tip->setText(QApplication::translate("downloadWindow", "\346\255\243\345\234\250\344\270\213\350\275\275\357\274\214\350\257\267\347\250\215\345\200\231.......", 0));
        label_2->setText(QApplication::translate("downloadWindow", "\350\257\267\351\200\211\346\213\251\346\227\245\346\234\237\357\274\232", 0));
        label_4->setText(QApplication::translate("downloadWindow", "\350\257\267\351\200\211\346\213\251\351\203\250\351\227\250\357\274\232", 0));
        label->setText(QApplication::translate("downloadWindow", "\351\200\211\346\213\251\344\270\213\350\275\275\346\235\241\344\273\266\357\274\232", 0));
        cb_all->setText(QApplication::translate("downloadWindow", "\345\205\250\351\203\250", 0));
        cb_date->setText(QApplication::translate("downloadWindow", "\346\227\245\346\234\237", 0));
        cb_depart->setText(QApplication::translate("downloadWindow", "\351\203\250\351\227\250", 0));
        bt_down->setText(QApplication::translate("downloadWindow", "\344\270\213\350\275\275", 0));
    } // retranslateUi

};

namespace Ui {
    class downloadWindow: public Ui_downloadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADWINDOW_H
