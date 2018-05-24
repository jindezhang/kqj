/********************************************************************************
** Form generated from reading UI file 'windowlog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLOG_H
#define UI_WINDOWLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_windowlog
{
public:
    QWidget *centralwidget;
    QTableView *table_record;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbb_year;
    QLabel *label_5;
    QComboBox *cbb_month;
    QLabel *label_6;
    QComboBox *cbb_day;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbb_h;
    QLabel *label_7;
    QComboBox *cbb_m;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cbb_type;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_select;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *cb_date;
    QCheckBox *cb_time;
    QCheckBox *cb_type;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    top *wg_top;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QMainWindow *windowlog)
    {
        if (windowlog->objectName().isEmpty())
            windowlog->setObjectName(QStringLiteral("windowlog"));
        windowlog->resize(800, 480);
        centralwidget = new QWidget(windowlog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        table_record = new QTableView(centralwidget);
        table_record->setObjectName(QStringLiteral("table_record"));
        table_record->setGeometry(QRect(0, 219, 800, 261));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(182, 75, 443, 132));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        cbb_year = new QComboBox(layoutWidget);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setFont(font);

        horizontalLayout->addWidget(cbb_year);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        cbb_month = new QComboBox(layoutWidget);
        cbb_month->setObjectName(QStringLiteral("cbb_month"));
        cbb_month->setFont(font);

        horizontalLayout->addWidget(cbb_month);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        cbb_day = new QComboBox(layoutWidget);
        cbb_day->setObjectName(QStringLiteral("cbb_day"));
        cbb_day->setFont(font);

        horizontalLayout->addWidget(cbb_day);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        cbb_h = new QComboBox(layoutWidget);
        cbb_h->setObjectName(QStringLiteral("cbb_h"));
        cbb_h->setFont(font);

        horizontalLayout_2->addWidget(cbb_h);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        cbb_m = new QComboBox(layoutWidget);
        cbb_m->setObjectName(QStringLiteral("cbb_m"));
        cbb_m->setFont(font);

        horizontalLayout_2->addWidget(cbb_m);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        cbb_type = new QComboBox(layoutWidget);
        cbb_type->setObjectName(QStringLiteral("cbb_type"));
        cbb_type->setFont(font);

        horizontalLayout_3->addWidget(cbb_type);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        bt_select = new QPushButton(layoutWidget);
        bt_select->setObjectName(QStringLiteral("bt_select"));
        QFont font1;
        font1.setPointSize(10);
        bt_select->setFont(font1);

        horizontalLayout_5->addWidget(bt_select);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        cb_date = new QCheckBox(layoutWidget);
        cb_date->setObjectName(QStringLiteral("cb_date"));
        cb_date->setFont(font);

        horizontalLayout_4->addWidget(cb_date);

        cb_time = new QCheckBox(layoutWidget);
        cb_time->setObjectName(QStringLiteral("cb_time"));
        cb_time->setFont(font);

        horizontalLayout_4->addWidget(cb_time);

        cb_type = new QCheckBox(layoutWidget);
        cb_type->setObjectName(QStringLiteral("cb_type"));
        cb_type->setFont(font);

        horizontalLayout_4->addWidget(cb_type);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 801, 61));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        wg_top = new top(layoutWidget_2);
        wg_top->setObjectName(QStringLiteral("wg_top"));

        horizontalLayout_6->addWidget(wg_top);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        windowlog->setCentralWidget(centralwidget);

        retranslateUi(windowlog);

        QMetaObject::connectSlotsByName(windowlog);
    } // setupUi

    void retranslateUi(QMainWindow *windowlog)
    {
        windowlog->setWindowTitle(QApplication::translate("windowlog", "MainWindow", 0));
        label->setText(QApplication::translate("windowlog", "\346\227\245\346\234\237\357\274\232", 0));
        label_5->setText(QApplication::translate("windowlog", "-", 0));
        label_6->setText(QApplication::translate("windowlog", "-", 0));
        label_2->setText(QApplication::translate("windowlog", "\346\227\266\351\227\264\357\274\232", 0));
        label_7->setText(QApplication::translate("windowlog", "\357\274\232", 0));
        label_3->setText(QApplication::translate("windowlog", "\347\261\273\345\236\213\357\274\232", 0));
        bt_select->setText(QApplication::translate("windowlog", "\346\237\245\350\257\242", 0));
        label_4->setText(QApplication::translate("windowlog", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        cb_date->setText(QApplication::translate("windowlog", "\346\227\245\346\234\237", 0));
        cb_time->setText(QApplication::translate("windowlog", "\346\227\266\351\227\264", 0));
        cb_type->setText(QApplication::translate("windowlog", "\347\261\273\345\236\213", 0));
    } // retranslateUi

};

namespace Ui {
    class windowlog: public Ui_windowlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLOG_H
