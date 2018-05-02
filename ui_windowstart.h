/********************************************************************************
** Form generated from reading UI file 'windowstart.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSTART_H
#define UI_WINDOWSTART_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <top.h>

QT_BEGIN_NAMESPACE

class Ui_windowstart
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *l_tip;
    QFrame *line;
    QWidget *layoutWidget_2;
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
    top *wg_top;
    QLabel *l_tip2;
    QLabel *icon;

    void setupUi(QMainWindow *windowstart)
    {
        if (windowstart->objectName().isEmpty())
            windowstart->setObjectName(QStringLiteral("windowstart"));
        windowstart->resize(800, 480);
        centralwidget = new QWidget(windowstart);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 310, 376, 46));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(25);
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        l_tip = new QLabel(layoutWidget);
        l_tip->setObjectName(QStringLiteral("l_tip"));
        l_tip->setFont(font);

        horizontalLayout_4->addWidget(l_tip);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 90, 376, 211));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        id = new QLineEdit(layoutWidget_2);
        id->setObjectName(QStringLiteral("id"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(id->sizePolicy().hasHeightForWidth());
        id->setSizePolicy(sizePolicy);
        id->setMinimumSize(QSize(20, 15));
        QFont font1;
        font1.setPointSize(15);
        id->setFont(font1);

        horizontalLayout->addWidget(id);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        name = new QLineEdit(layoutWidget_2);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMinimumSize(QSize(20, 15));
        name->setFont(font1);

        horizontalLayout_2->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        depart = new QLineEdit(layoutWidget_2);
        depart->setObjectName(QStringLiteral("depart"));
        sizePolicy.setHeightForWidth(depart->sizePolicy().hasHeightForWidth());
        depart->setSizePolicy(sizePolicy);
        depart->setMinimumSize(QSize(20, 15));
        depart->setFont(font1);

        horizontalLayout_3->addWidget(depart);


        verticalLayout->addLayout(horizontalLayout_3);

        wg_top = new top(centralwidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        wg_top->setMinimumSize(QSize(800, 50));
        l_tip2 = new QLabel(centralwidget);
        l_tip2->setObjectName(QStringLiteral("l_tip2"));
        l_tip2->setGeometry(QRect(130, 380, 201, 33));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        l_tip2->setFont(font2);
        icon = new QLabel(centralwidget);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(450, 90, 200, 230));
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(200, 230));
        icon->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 127);"));
        windowstart->setCentralWidget(centralwidget);

        retranslateUi(windowstart);

        QMetaObject::connectSlotsByName(windowstart);
    } // setupUi

    void retranslateUi(QMainWindow *windowstart)
    {
        windowstart->setWindowTitle(QApplication::translate("windowstart", "MainWindow", 0));
        label_4->setText(QApplication::translate("windowstart", "\346\217\220\347\244\272\344\277\241\346\201\257\357\274\232", 0));
        l_tip->setText(QApplication::translate("windowstart", "\350\257\267\345\210\267\345\215\241......", 0));
        label_3->setText(QApplication::translate("windowstart", "\345\267\245\345\217\267\357\274\232", 0));
        label->setText(QApplication::translate("windowstart", "\345\247\223\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("windowstart", "\346\211\200\345\261\236\351\203\250\351\227\250\357\274\232", 0));
        l_tip2->setText(QString());
        icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class windowstart: public Ui_windowstart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSTART_H
