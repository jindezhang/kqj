/********************************************************************************
** Form generated from reading UI file 'selectforid.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFORID_H
#define UI_SELECTFORID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_selectforid
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    top *wg_top;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbb_year;
    QComboBox *cbb_month;
    QComboBox *cbb_day;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *cbb_depart;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_selectdate;
    QLabel *l_tip;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *cb_am;
    QCheckBox *cb_pm;
    QCheckBox *cb_nm;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QCheckBox *cb_depart;
    QCheckBox *cb_date;
    QSpacerItem *horizontalSpacer_9;
    QTableView *table_record;

    void setupUi(QMainWindow *selectforid)
    {
        if (selectforid->objectName().isEmpty())
            selectforid->setObjectName(QStringLiteral("selectforid"));
        selectforid->resize(818, 480);
        centralwidget = new QWidget(selectforid);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        wg_top = new top(centralwidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setMinimumSize(QSize(800, 50));

        gridLayout->addWidget(wg_top, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        cbb_year = new QComboBox(centralwidget);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setFont(font);

        horizontalLayout->addWidget(cbb_year);

        cbb_month = new QComboBox(centralwidget);
        cbb_month->setObjectName(QStringLiteral("cbb_month"));
        cbb_month->setFont(font);

        horizontalLayout->addWidget(cbb_month);

        cbb_day = new QComboBox(centralwidget);
        cbb_day->setObjectName(QStringLiteral("cbb_day"));
        cbb_day->setFont(font);

        horizontalLayout->addWidget(cbb_day);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        cbb_depart = new QComboBox(centralwidget);
        cbb_depart->setObjectName(QStringLiteral("cbb_depart"));
        cbb_depart->setFont(font);

        horizontalLayout_3->addWidget(cbb_depart);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        bt_selectdate = new QPushButton(centralwidget);
        bt_selectdate->setObjectName(QStringLiteral("bt_selectdate"));
        bt_selectdate->setFont(font);

        horizontalLayout_3->addWidget(bt_selectdate);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        l_tip = new QLabel(centralwidget);
        l_tip->setObjectName(QStringLiteral("l_tip"));
        l_tip->setMinimumSize(QSize(20, 0));
        l_tip->setFont(font);

        horizontalLayout_5->addWidget(l_tip);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        cb_am = new QCheckBox(centralwidget);
        cb_am->setObjectName(QStringLiteral("cb_am"));
        cb_am->setFont(font);

        horizontalLayout_2->addWidget(cb_am);

        cb_pm = new QCheckBox(centralwidget);
        cb_pm->setObjectName(QStringLiteral("cb_pm"));
        cb_pm->setFont(font);

        horizontalLayout_2->addWidget(cb_pm);

        cb_nm = new QCheckBox(centralwidget);
        cb_nm->setObjectName(QStringLiteral("cb_nm"));
        cb_nm->setFont(font);

        horizontalLayout_2->addWidget(cb_nm);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        cb_depart = new QCheckBox(centralwidget);
        cb_depart->setObjectName(QStringLiteral("cb_depart"));
        cb_depart->setFont(font);

        horizontalLayout_2->addWidget(cb_depart);

        cb_date = new QCheckBox(centralwidget);
        cb_date->setObjectName(QStringLiteral("cb_date"));
        cb_date->setFont(font);

        horizontalLayout_2->addWidget(cb_date);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        table_record = new QTableView(centralwidget);
        table_record->setObjectName(QStringLiteral("table_record"));

        gridLayout->addWidget(table_record, 4, 0, 1, 1);

        selectforid->setCentralWidget(centralwidget);

        retranslateUi(selectforid);

        QMetaObject::connectSlotsByName(selectforid);
    } // setupUi

    void retranslateUi(QMainWindow *selectforid)
    {
        selectforid->setWindowTitle(QApplication::translate("selectforid", "MainWindow", 0));
        label->setText(QApplication::translate("selectforid", "\350\257\267\351\200\211\346\213\251\346\227\245\346\234\237\357\274\232", 0));
        label_4->setText(QApplication::translate("selectforid", "\350\257\267\351\200\211\346\213\251\351\203\250\351\227\250\357\274\232", 0));
        bt_selectdate->setText(QApplication::translate("selectforid", "\346\237\245\350\257\242", 0));
        l_tip->setText(QString());
        label_2->setText(QApplication::translate("selectforid", "\346\230\276\347\244\272\350\256\260\345\275\225\357\274\232", 0));
        cb_am->setText(QApplication::translate("selectforid", "\344\270\212\345\215\210", 0));
        cb_pm->setText(QApplication::translate("selectforid", "\344\270\213\345\215\210", 0));
        cb_nm->setText(QApplication::translate("selectforid", "\346\231\232\344\270\212", 0));
        label_3->setText(QApplication::translate("selectforid", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        cb_depart->setText(QApplication::translate("selectforid", "\351\203\250\351\227\250", 0));
        cb_date->setText(QApplication::translate("selectforid", "\346\227\245\346\234\237", 0));
    } // retranslateUi

};

namespace Ui {
    class selectforid: public Ui_selectforid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFORID_H
