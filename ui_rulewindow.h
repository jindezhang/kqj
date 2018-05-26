/********************************************************************************
** Form generated from reading UI file 'rulewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULEWINDOW_H
#define UI_RULEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_rulewindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *l_name;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cbb_name;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_change;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *bt_del;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *l_name_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *l_name_6;
    QLineEdit *amg;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *l_name_7;
    QLineEdit *amo;
    QPushButton *pushButton_2;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *l_name_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *l_name_9;
    QLineEdit *pmg;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *l_name_10;
    QLineEdit *pmo;
    QPushButton *pushButton_4;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *l_name_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *l_name_12;
    QLineEdit *nmg;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *l_name_13;
    QLineEdit *nmo;
    QPushButton *pushButton_6;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *add;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_10;
    top *wg_top;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *l_name_2;
    QLabel *l_name_14;
    QLabel *l_name_3;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *cbb_h;
    QLabel *l_name_4;
    QComboBox *cbb_m;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QMainWindow *rulewindow)
    {
        if (rulewindow->objectName().isEmpty())
            rulewindow->setObjectName(QStringLiteral("rulewindow"));
        rulewindow->resize(800, 480);
        centralwidget = new QWidget(rulewindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 70, 521, 391));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        l_name = new QLabel(layoutWidget);
        l_name->setObjectName(QStringLiteral("l_name"));
        l_name->setFont(font);

        horizontalLayout->addWidget(l_name);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cbb_name = new QComboBox(layoutWidget);
        cbb_name->setObjectName(QStringLiteral("cbb_name"));
        cbb_name->setMinimumSize(QSize(80, 25));

        horizontalLayout_2->addWidget(cbb_name);

        horizontalSpacer = new QSpacerItem(21, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bt_change = new QPushButton(layoutWidget);
        bt_change->setObjectName(QStringLiteral("bt_change"));
        bt_change->setMinimumSize(QSize(80, 25));

        horizontalLayout_2->addWidget(bt_change);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        bt_del = new QPushButton(layoutWidget);
        bt_del->setObjectName(QStringLiteral("bt_del"));
        bt_del->setMinimumSize(QSize(80, 25));

        horizontalLayout_2->addWidget(bt_del);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 150, 219, 324));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        l_name_5 = new QLabel(layoutWidget1);
        l_name_5->setObjectName(QStringLiteral("l_name_5"));
        QFont font1;
        font1.setPointSize(9);
        l_name_5->setFont(font1);

        verticalLayout_5->addWidget(l_name_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        l_name_6 = new QLabel(layoutWidget1);
        l_name_6->setObjectName(QStringLiteral("l_name_6"));
        l_name_6->setFont(font1);

        horizontalLayout_6->addWidget(l_name_6);

        amg = new QLineEdit(layoutWidget1);
        amg->setObjectName(QStringLiteral("amg"));
        amg->setMinimumSize(QSize(60, 20));
        QFont font2;
        font2.setPointSize(7);
        amg->setFont(font2);

        horizontalLayout_6->addWidget(amg);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        l_name_7 = new QLabel(layoutWidget1);
        l_name_7->setObjectName(QStringLiteral("l_name_7"));
        l_name_7->setFont(font1);

        horizontalLayout_7->addWidget(l_name_7);

        amo = new QLineEdit(layoutWidget1);
        amo->setObjectName(QStringLiteral("amo"));
        amo->setMinimumSize(QSize(60, 20));
        amo->setFont(font2);

        horizontalLayout_7->addWidget(amo);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font2);

        horizontalLayout_7->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        line_4 = new QFrame(layoutWidget1);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        l_name_8 = new QLabel(layoutWidget1);
        l_name_8->setObjectName(QStringLiteral("l_name_8"));
        l_name_8->setFont(font1);

        verticalLayout_6->addWidget(l_name_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        l_name_9 = new QLabel(layoutWidget1);
        l_name_9->setObjectName(QStringLiteral("l_name_9"));
        l_name_9->setFont(font1);

        horizontalLayout_8->addWidget(l_name_9);

        pmg = new QLineEdit(layoutWidget1);
        pmg->setObjectName(QStringLiteral("pmg"));
        pmg->setMinimumSize(QSize(60, 20));
        pmg->setFont(font2);

        horizontalLayout_8->addWidget(pmg);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font2);

        horizontalLayout_8->addWidget(pushButton_3);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        l_name_10 = new QLabel(layoutWidget1);
        l_name_10->setObjectName(QStringLiteral("l_name_10"));
        l_name_10->setFont(font1);

        horizontalLayout_9->addWidget(l_name_10);

        pmo = new QLineEdit(layoutWidget1);
        pmo->setObjectName(QStringLiteral("pmo"));
        pmo->setMinimumSize(QSize(60, 20));
        pmo->setFont(font2);

        horizontalLayout_9->addWidget(pmo);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font2);

        horizontalLayout_9->addWidget(pushButton_4);


        verticalLayout_6->addLayout(horizontalLayout_9);

        line_5 = new QFrame(layoutWidget1);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_5);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        l_name_11 = new QLabel(layoutWidget1);
        l_name_11->setObjectName(QStringLiteral("l_name_11"));
        l_name_11->setFont(font1);

        verticalLayout_7->addWidget(l_name_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        l_name_12 = new QLabel(layoutWidget1);
        l_name_12->setObjectName(QStringLiteral("l_name_12"));
        l_name_12->setFont(font1);

        horizontalLayout_10->addWidget(l_name_12);

        nmg = new QLineEdit(layoutWidget1);
        nmg->setObjectName(QStringLiteral("nmg"));
        nmg->setMinimumSize(QSize(60, 20));
        nmg->setFont(font2);

        horizontalLayout_10->addWidget(nmg);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font2);

        horizontalLayout_10->addWidget(pushButton_5);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        l_name_13 = new QLabel(layoutWidget1);
        l_name_13->setObjectName(QStringLiteral("l_name_13"));
        l_name_13->setFont(font1);

        horizontalLayout_11->addWidget(l_name_13);

        nmo = new QLineEdit(layoutWidget1);
        nmo->setObjectName(QStringLiteral("nmo"));
        nmo->setMinimumSize(QSize(60, 20));
        nmo->setFont(font2);

        horizontalLayout_11->addWidget(nmo);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font2);

        horizontalLayout_11->addWidget(pushButton_6);


        verticalLayout_7->addLayout(horizontalLayout_11);

        line_6 = new QFrame(layoutWidget1);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_6);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_12->addWidget(pushButton_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);

        add = new QPushButton(layoutWidget1);
        add->setObjectName(QStringLiteral("add"));

        horizontalLayout_12->addWidget(add);


        verticalLayout_8->addLayout(horizontalLayout_12);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 801, 61));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);

        wg_top = new top(layoutWidget_2);
        wg_top->setObjectName(QStringLiteral("wg_top"));

        horizontalLayout_13->addWidget(wg_top);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(29, 56, 231, 91));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        l_name_2 = new QLabel(widget);
        l_name_2->setObjectName(QStringLiteral("l_name_2"));
        l_name_2->setFont(font1);

        horizontalLayout_4->addWidget(l_name_2);

        l_name_14 = new QLabel(widget);
        l_name_14->setObjectName(QStringLiteral("l_name_14"));
        l_name_14->setMaximumSize(QSize(10, 16777215));
        l_name_14->setFont(font);

        horizontalLayout_4->addWidget(l_name_14);

        l_name_3 = new QLabel(widget);
        l_name_3->setObjectName(QStringLiteral("l_name_3"));
        l_name_3->setFont(font1);

        horizontalLayout_4->addWidget(l_name_3);

        horizontalSpacer_8 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        cbb_h = new QComboBox(widget);
        cbb_h->setObjectName(QStringLiteral("cbb_h"));
        cbb_h->setMinimumSize(QSize(50, 30));
        cbb_h->setMaximumSize(QSize(50, 16777215));
        cbb_h->setFont(font2);

        horizontalLayout_5->addWidget(cbb_h);

        l_name_4 = new QLabel(widget);
        l_name_4->setObjectName(QStringLiteral("l_name_4"));
        l_name_4->setMaximumSize(QSize(10, 16777215));
        l_name_4->setFont(font);

        horizontalLayout_5->addWidget(l_name_4);

        cbb_m = new QComboBox(widget);
        cbb_m->setObjectName(QStringLiteral("cbb_m"));
        cbb_m->setMinimumSize(QSize(50, 30));
        cbb_m->setMaximumSize(QSize(50, 16777215));
        cbb_m->setFont(font2);

        horizontalLayout_5->addWidget(cbb_m);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 2);

        rulewindow->setCentralWidget(centralwidget);

        retranslateUi(rulewindow);

        QMetaObject::connectSlotsByName(rulewindow);
    } // setupUi

    void retranslateUi(QMainWindow *rulewindow)
    {
        rulewindow->setWindowTitle(QApplication::translate("rulewindow", "MainWindow", 0));
        label->setText(QApplication::translate("rulewindow", "\345\275\223\345\211\215\350\200\203\345\213\244\350\247\204\345\210\231\357\274\232", 0));
        l_name->setText(QApplication::translate("rulewindow", "NULL", 0));
        bt_change->setText(QApplication::translate("rulewindow", "\346\233\264\346\215\242\350\247\204\345\210\231", 0));
        bt_del->setText(QApplication::translate("rulewindow", "\345\210\240\351\231\244\350\247\204\345\210\231", 0));
        l_name_5->setText(QApplication::translate("rulewindow", "\344\270\212\345\215\210\357\274\232", 0));
        l_name_6->setText(QApplication::translate("rulewindow", "\344\270\212\347\217\255", 0));
        pushButton->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        l_name_7->setText(QApplication::translate("rulewindow", "\344\270\213\347\217\255", 0));
        pushButton_2->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        l_name_8->setText(QApplication::translate("rulewindow", "\344\270\213\345\215\210\357\274\232", 0));
        l_name_9->setText(QApplication::translate("rulewindow", "\344\270\212\347\217\255", 0));
        pushButton_3->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        l_name_10->setText(QApplication::translate("rulewindow", "\344\270\213\347\217\255", 0));
        pushButton_4->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        l_name_11->setText(QApplication::translate("rulewindow", "\346\231\232\344\270\212\357\274\232", 0));
        l_name_12->setText(QApplication::translate("rulewindow", "\344\270\212\347\217\255", 0));
        pushButton_5->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        l_name_13->setText(QApplication::translate("rulewindow", "\344\270\213\347\217\255", 0));
        pushButton_6->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        pushButton_8->setText(QApplication::translate("rulewindow", "\351\207\215\347\275\256", 0));
        add->setText(QApplication::translate("rulewindow", "\346\267\273\345\212\240", 0));
        label_2->setText(QApplication::translate("rulewindow", "\350\247\204\345\210\231\345\220\215\346\230\257\346\227\245\346\234\237+\346\227\266\351\227\264\347\273\204\345\220\210", 0));
        l_name_2->setText(QApplication::translate("rulewindow", "\345\260\217\346\227\266", 0));
        l_name_14->setText(QApplication::translate("rulewindow", ":", 0));
        l_name_3->setText(QApplication::translate("rulewindow", "\345\210\206\351\222\237", 0));
        l_name_4->setText(QApplication::translate("rulewindow", ":", 0));
    } // retranslateUi

};

namespace Ui {
    class rulewindow: public Ui_rulewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULEWINDOW_H
