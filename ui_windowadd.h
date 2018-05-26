/********************************************************************************
** Form generated from reading UI file 'windowadd.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADD_H
#define UI_WINDOWADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_windowadd
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *id;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *name;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *depart;
    QFrame *line_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *bt_end;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    top *wg_top;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *l_tip;
    QFrame *line;

    void setupUi(QMainWindow *windowadd)
    {
        if (windowadd->objectName().isEmpty())
            windowadd->setObjectName(QStringLiteral("windowadd"));
        windowadd->resize(800, 480);
        centralwidget = new QWidget(windowadd);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 390, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 390, 75, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 70, 411, 241));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        id = new QLineEdit(layoutWidget);
        id->setObjectName(QStringLiteral("id"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(id->sizePolicy().hasHeightForWidth());
        id->setSizePolicy(sizePolicy);
        id->setMinimumSize(QSize(20, 15));
        id->setFont(font);

        horizontalLayout->addWidget(id);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMinimumSize(QSize(20, 15));
        name->setFont(font);

        horizontalLayout_2->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        depart = new QLineEdit(layoutWidget);
        depart->setObjectName(QStringLiteral("depart"));
        sizePolicy.setHeightForWidth(depart->sizePolicy().hasHeightForWidth());
        depart->setSizePolicy(sizePolicy);
        depart->setMinimumSize(QSize(20, 15));
        depart->setFont(font);

        horizontalLayout_3->addWidget(depart);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(580, 80, 77, 110));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font1;
        font1.setPointSize(12);
        pushButton_3->setFont(font1);

        verticalLayout_4->addWidget(pushButton_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        bt_end = new QPushButton(layoutWidget1);
        bt_end->setObjectName(QStringLiteral("bt_end"));
        bt_end->setFont(font1);

        verticalLayout_4->addWidget(bt_end);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 801, 61));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        wg_top = new top(layoutWidget_2);
        wg_top->setObjectName(QStringLiteral("wg_top"));

        horizontalLayout_5->addWidget(wg_top);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(141, 322, 411, 61));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        l_tip = new QLabel(widget);
        l_tip->setObjectName(QStringLiteral("l_tip"));
        l_tip->setFont(font);

        horizontalLayout_4->addWidget(l_tip);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        windowadd->setCentralWidget(centralwidget);

        retranslateUi(windowadd);

        QMetaObject::connectSlotsByName(windowadd);
    } // setupUi

    void retranslateUi(QMainWindow *windowadd)
    {
        windowadd->setWindowTitle(QApplication::translate("windowadd", "MainWindow", 0));
        pushButton->setText(QApplication::translate("windowadd", "\346\267\273\345\212\240", 0));
        pushButton_2->setText(QApplication::translate("windowadd", "\351\207\215\347\275\256", 0));
        label_3->setText(QApplication::translate("windowadd", "\345\267\245\345\217\267\357\274\232", 0));
        label->setText(QApplication::translate("windowadd", "\345\247\223\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("windowadd", "\346\211\200\345\261\236\351\203\250\351\227\250\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("windowadd", "\345\274\200\345\247\213", 0));
        bt_end->setText(QApplication::translate("windowadd", "\347\273\223\346\235\237", 0));
        label_4->setText(QApplication::translate("windowadd", "\346\217\220\347\244\272\357\274\232", 0));
        l_tip->setText(QApplication::translate("windowadd", "\350\257\267\345\210\267\345\215\241......", 0));
    } // retranslateUi

};

namespace Ui {
    class windowadd: public Ui_windowadd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADD_H
