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
    QLabel *labl;
    QLabel *label_2;
    QComboBox *cbb_day;
    QComboBox *cbb_month;
    QComboBox *cbb_year;
    QLabel *label_4;
    QComboBox *cbb_depart;
    QWidget *widget;
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

        labl = new QLabel(centralwidget);
        labl->setObjectName(QStringLiteral("labl"));
        labl->setGeometry(QRect(162, 216, 20, 23));
        labl->setMinimumSize(QSize(20, 0));
        QFont font1;
        font1.setPointSize(15);
        labl->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 180, 111, 31));
        label_2->setFont(font);
        cbb_day = new QComboBox(centralwidget);
        cbb_day->setObjectName(QStringLiteral("cbb_day"));
        cbb_day->setGeometry(QRect(471, 183, 91, 31));
        cbb_day->setFont(font);
        cbb_month = new QComboBox(centralwidget);
        cbb_month->setObjectName(QStringLiteral("cbb_month"));
        cbb_month->setGeometry(QRect(368, 183, 91, 31));
        cbb_month->setFont(font);
        cbb_year = new QComboBox(centralwidget);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setGeometry(QRect(265, 183, 91, 31));
        cbb_year->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 240, 111, 31));
        label_4->setFont(font);
        cbb_depart = new QComboBox(centralwidget);
        cbb_depart->setObjectName(QStringLiteral("cbb_depart"));
        cbb_depart->setGeometry(QRect(265, 246, 91, 31));
        QFont font2;
        font2.setPointSize(13);
        cbb_depart->setFont(font2);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(152, 281, 421, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cb_all = new QCheckBox(widget);
        cb_all->setObjectName(QStringLiteral("cb_all"));
        cb_all->setFont(font);

        horizontalLayout->addWidget(cb_all);

        cb_date = new QCheckBox(widget);
        cb_date->setObjectName(QStringLiteral("cb_date"));
        cb_date->setFont(font);

        horizontalLayout->addWidget(cb_date);

        cb_depart = new QCheckBox(widget);
        cb_depart->setObjectName(QStringLiteral("cb_depart"));
        cb_depart->setFont(font);

        horizontalLayout->addWidget(cb_depart);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bt_down = new QPushButton(widget);
        bt_down->setObjectName(QStringLiteral("bt_down"));
        bt_down->setFont(font);

        horizontalLayout->addWidget(bt_down);


        verticalLayout->addLayout(horizontalLayout);

        downloadWindow->setCentralWidget(centralwidget);

        retranslateUi(downloadWindow);

        QMetaObject::connectSlotsByName(downloadWindow);
    } // setupUi

    void retranslateUi(QMainWindow *downloadWindow)
    {
        downloadWindow->setWindowTitle(QApplication::translate("downloadWindow", "MainWindow", 0));
        l_tip->setText(QApplication::translate("downloadWindow", "\346\255\243\345\234\250\344\270\213\350\275\275\357\274\214\350\257\267\347\250\215\345\200\231.......", 0));
        labl->setText(QString());
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
