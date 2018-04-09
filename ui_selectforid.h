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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectforid
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *bt_fanhui;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QLabel *l_date;
    QLabel *l_time;
    QSpacerItem *horizontalSpacer_2;
    QLabel *l_net;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbb_year;
    QComboBox *cbb_month;
    QComboBox *cbb_day;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
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
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *selectforid)
    {
        if (selectforid->objectName().isEmpty())
            selectforid->setObjectName(QStringLiteral("selectforid"));
        selectforid->resize(800, 480);
        centralwidget = new QWidget(selectforid);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(9);
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        bt_fanhui = new QPushButton(centralwidget);
        bt_fanhui->setObjectName(QStringLiteral("bt_fanhui"));

        horizontalLayout_7->addWidget(bt_fanhui);


        horizontalLayout_6->addLayout(horizontalLayout_7);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);

        horizontalLayout_6->addWidget(label_9);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        l_date = new QLabel(centralwidget);
        l_date->setObjectName(QStringLiteral("l_date"));
        QFont font2;
        font2.setPointSize(10);
        l_date->setFont(font2);

        horizontalLayout_8->addWidget(l_date);

        l_time = new QLabel(centralwidget);
        l_time->setObjectName(QStringLiteral("l_time"));
        l_time->setFont(font2);

        horizontalLayout_8->addWidget(l_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        l_net = new QLabel(centralwidget);
        l_net->setObjectName(QStringLiteral("l_net"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_net->sizePolicy().hasHeightForWidth());
        l_net->setSizePolicy(sizePolicy);
        l_net->setMinimumSize(QSize(15, 15));
        l_net->setMaximumSize(QSize(15, 15));
        l_net->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 255);"));

        horizontalLayout_8->addWidget(l_net);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        horizontalLayout_6->addLayout(horizontalLayout_8);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setPointSize(15);
        label->setFont(font3);

        horizontalLayout->addWidget(label);

        cbb_year = new QComboBox(centralwidget);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));
        cbb_year->setFont(font3);

        horizontalLayout->addWidget(cbb_year);

        cbb_month = new QComboBox(centralwidget);
        cbb_month->setObjectName(QStringLiteral("cbb_month"));
        cbb_month->setFont(font3);

        horizontalLayout->addWidget(cbb_month);

        cbb_day = new QComboBox(centralwidget);
        cbb_day->setObjectName(QStringLiteral("cbb_day"));
        cbb_day->setFont(font3);

        horizontalLayout->addWidget(cbb_day);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);

        horizontalLayout_3->addWidget(label_4);

        cbb_depart = new QComboBox(centralwidget);
        cbb_depart->setObjectName(QStringLiteral("cbb_depart"));
        cbb_depart->setFont(font3);

        horizontalLayout_3->addWidget(cbb_depart);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        bt_selectdate = new QPushButton(centralwidget);
        bt_selectdate->setObjectName(QStringLiteral("bt_selectdate"));
        bt_selectdate->setFont(font3);

        horizontalLayout_3->addWidget(bt_selectdate);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        l_tip = new QLabel(centralwidget);
        l_tip->setObjectName(QStringLiteral("l_tip"));
        l_tip->setMinimumSize(QSize(20, 0));
        l_tip->setFont(font3);

        horizontalLayout_5->addWidget(l_tip);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);

        horizontalLayout_2->addWidget(label_2);

        cb_am = new QCheckBox(centralwidget);
        cb_am->setObjectName(QStringLiteral("cb_am"));
        cb_am->setFont(font3);

        horizontalLayout_2->addWidget(cb_am);

        cb_pm = new QCheckBox(centralwidget);
        cb_pm->setObjectName(QStringLiteral("cb_pm"));
        cb_pm->setFont(font3);

        horizontalLayout_2->addWidget(cb_pm);

        cb_nm = new QCheckBox(centralwidget);
        cb_nm->setObjectName(QStringLiteral("cb_nm"));
        cb_nm->setFont(font3);

        horizontalLayout_2->addWidget(cb_nm);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);

        horizontalLayout_2->addWidget(label_3);

        cb_depart = new QCheckBox(centralwidget);
        cb_depart->setObjectName(QStringLiteral("cb_depart"));
        cb_depart->setFont(font3);

        horizontalLayout_2->addWidget(cb_depart);

        cb_date = new QCheckBox(centralwidget);
        cb_date->setObjectName(QStringLiteral("cb_date"));
        cb_date->setFont(font3);

        horizontalLayout_2->addWidget(cb_date);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(25, 0));

        gridLayout->addWidget(tableWidget, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        selectforid->setCentralWidget(centralwidget);

        retranslateUi(selectforid);

        QMetaObject::connectSlotsByName(selectforid);
    } // setupUi

    void retranslateUi(QMainWindow *selectforid)
    {
        selectforid->setWindowTitle(QApplication::translate("selectforid", "MainWindow", 0));
        label_5->setText(QApplication::translate("selectforid", "\344\270\273\347\225\214\351\235\242 >>  \346\237\245\350\257\242\357\274\232", 0));
        bt_fanhui->setText(QApplication::translate("selectforid", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", 0));
        label_9->setText(QApplication::translate("selectforid", "\346\254\242\350\277\216\344\275\277\347\224\250DH\350\200\203\345\213\244\346\234\272\347\263\273\347\273\237", 0));
        l_date->setText(QApplication::translate("selectforid", "yyyy-mm-dd", 0));
        l_time->setText(QApplication::translate("selectforid", "hh:mm:ss", 0));
        l_net->setText(QString());
        label->setText(QApplication::translate("selectforid", "\350\257\267\351\200\211\346\213\251\346\227\245\346\234\237\357\274\232", 0));
        cbb_year->clear();
        cbb_year->insertItems(0, QStringList()
         << QApplication::translate("selectforid", "2017", 0)
         << QApplication::translate("selectforid", "2018", 0)
        );
        cbb_month->clear();
        cbb_month->insertItems(0, QStringList()
         << QApplication::translate("selectforid", "1", 0)
         << QApplication::translate("selectforid", "2", 0)
         << QApplication::translate("selectforid", "3", 0)
         << QApplication::translate("selectforid", "4", 0)
         << QApplication::translate("selectforid", "5", 0)
         << QApplication::translate("selectforid", "6", 0)
         << QApplication::translate("selectforid", "7", 0)
         << QApplication::translate("selectforid", "8", 0)
         << QApplication::translate("selectforid", "9", 0)
         << QApplication::translate("selectforid", "10", 0)
         << QApplication::translate("selectforid", "11", 0)
         << QApplication::translate("selectforid", "12", 0)
        );
        cbb_day->clear();
        cbb_day->insertItems(0, QStringList()
         << QApplication::translate("selectforid", "1", 0)
         << QApplication::translate("selectforid", "2", 0)
         << QApplication::translate("selectforid", "3", 0)
         << QApplication::translate("selectforid", "4", 0)
         << QApplication::translate("selectforid", "5", 0)
         << QApplication::translate("selectforid", "6", 0)
         << QApplication::translate("selectforid", "7", 0)
         << QApplication::translate("selectforid", "8", 0)
         << QApplication::translate("selectforid", "9", 0)
         << QApplication::translate("selectforid", "10", 0)
         << QApplication::translate("selectforid", "11", 0)
         << QApplication::translate("selectforid", "12", 0)
         << QApplication::translate("selectforid", "13", 0)
         << QApplication::translate("selectforid", "14", 0)
         << QApplication::translate("selectforid", "15", 0)
         << QApplication::translate("selectforid", "16", 0)
         << QApplication::translate("selectforid", "17", 0)
         << QApplication::translate("selectforid", "18", 0)
         << QApplication::translate("selectforid", "19", 0)
         << QApplication::translate("selectforid", "20", 0)
         << QApplication::translate("selectforid", "21", 0)
         << QApplication::translate("selectforid", "22", 0)
         << QApplication::translate("selectforid", "23", 0)
         << QApplication::translate("selectforid", "24", 0)
         << QApplication::translate("selectforid", "25", 0)
         << QApplication::translate("selectforid", "26", 0)
         << QApplication::translate("selectforid", "27", 0)
         << QApplication::translate("selectforid", "28", 0)
         << QApplication::translate("selectforid", "29", 0)
         << QApplication::translate("selectforid", "30", 0)
         << QApplication::translate("selectforid", "31", 0)
        );
        label_4->setText(QApplication::translate("selectforid", "\350\257\267\351\200\211\346\213\251\351\203\250\351\227\250\357\274\232", 0));
        cbb_depart->clear();
        cbb_depart->insertItems(0, QStringList()
         << QApplication::translate("selectforid", "\350\264\242\345\212\241\351\203\250", 0)
        );
        bt_selectdate->setText(QApplication::translate("selectforid", "\346\237\245\350\257\242", 0));
        l_tip->setText(QString());
        label_2->setText(QApplication::translate("selectforid", "\346\230\276\347\244\272\350\256\260\345\275\225\357\274\232", 0));
        cb_am->setText(QApplication::translate("selectforid", "\344\270\212\345\215\210", 0));
        cb_pm->setText(QApplication::translate("selectforid", "\344\270\213\345\215\210", 0));
        cb_nm->setText(QApplication::translate("selectforid", "\346\231\232\344\270\212", 0));
        label_3->setText(QApplication::translate("selectforid", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", 0));
        cb_depart->setText(QApplication::translate("selectforid", "\351\203\250\351\227\250", 0));
        cb_date->setText(QApplication::translate("selectforid", "\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("selectforid", "\345\267\245\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("selectforid", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("selectforid", "\351\203\250\351\227\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("selectforid", "\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("selectforid", "\344\270\212\345\215\210-\344\270\212\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("selectforid", "\344\270\212\345\215\210-\344\270\213\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("selectforid", "\344\270\213\345\215\210-\344\270\212\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("selectforid", "\344\270\213\345\215\210-\344\270\213\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("selectforid", "\346\231\232\344\270\212-\344\270\212\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("selectforid", "\346\231\232\344\270\212-\344\270\213\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("selectforid", "\345\244\207\346\263\250", 0));
    } // retranslateUi

};

namespace Ui {
    class selectforid: public Ui_selectforid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFORID_H
