/********************************************************************************
** Form generated from reading UI file 'top.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOP_H
#define UI_TOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_top
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *bt_fanhui;
    QLabel *label_9;
    QLabel *l_time;
    QLabel *l_net;
    QLabel *l_date;
    QLabel *l_dir;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line;

    void setupUi(QWidget *top)
    {
        if (top->objectName().isEmpty())
            top->setObjectName(QStringLiteral("top"));
        top->resize(800, 52);
        gridLayout = new QGridLayout(top);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 10, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 12, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 7, 1, 1);

        bt_fanhui = new QPushButton(top);
        bt_fanhui->setObjectName(QStringLiteral("bt_fanhui"));
        QFont font;
        font.setPointSize(7);
        bt_fanhui->setFont(font);

        gridLayout_2->addWidget(bt_fanhui, 0, 3, 1, 1);

        label_9 = new QLabel(top);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);

        gridLayout_2->addWidget(label_9, 0, 5, 1, 1);

        l_time = new QLabel(top);
        l_time->setObjectName(QStringLiteral("l_time"));
        QFont font2;
        font2.setPointSize(10);
        l_time->setFont(font2);

        gridLayout_2->addWidget(l_time, 0, 9, 1, 1);

        l_net = new QLabel(top);
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

        gridLayout_2->addWidget(l_net, 0, 11, 1, 1);

        l_date = new QLabel(top);
        l_date->setObjectName(QStringLiteral("l_date"));
        l_date->setFont(font2);

        gridLayout_2->addWidget(l_date, 0, 8, 1, 1);

        l_dir = new QLabel(top);
        l_dir->setObjectName(QStringLiteral("l_dir"));
        QFont font3;
        font3.setPointSize(9);
        l_dir->setFont(font3);

        gridLayout_2->addWidget(l_dir, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        line = new QFrame(top);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);


        retranslateUi(top);

        QMetaObject::connectSlotsByName(top);
    } // setupUi

    void retranslateUi(QWidget *top)
    {
        top->setWindowTitle(QApplication::translate("top", "Form", 0));
        bt_fanhui->setText(QApplication::translate("top", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", 0));
        label_9->setText(QApplication::translate("top", "\346\254\242\350\277\216\344\275\277\347\224\250DH\350\200\203\345\213\244\346\234\272\347\263\273\347\273\237", 0));
        l_time->setText(QApplication::translate("top", "hh:mm:ss", 0));
        l_net->setText(QString());
        l_date->setText(QApplication::translate("top", "yyyy-mm-dd", 0));
        l_dir->setText(QApplication::translate("top", "\344\270\273\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class top: public Ui_top {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOP_H
