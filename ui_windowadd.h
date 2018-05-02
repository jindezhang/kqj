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
    top *wg_top;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *l_tip;
    QFrame *line;
    QWidget *widget1;
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

    void setupUi(QMainWindow *windowadd)
    {
        if (windowadd->objectName().isEmpty())
            windowadd->setObjectName(QStringLiteral("windowadd"));
        windowadd->resize(800, 480);
        centralwidget = new QWidget(windowadd);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wg_top = new top(centralwidget);
        wg_top->setObjectName(QStringLiteral("wg_top"));
        wg_top->setGeometry(QRect(0, 0, 800, 50));
        wg_top->setMinimumSize(QSize(800, 50));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 390, 91, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 390, 91, 41));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(360, 320, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 330, 376, 46));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(25);
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

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(210, 110, 378, 222));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        id = new QLineEdit(widget1);
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
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        name = new QLineEdit(widget1);
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
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        depart = new QLineEdit(widget1);
        depart->setObjectName(QStringLiteral("depart"));
        sizePolicy.setHeightForWidth(depart->sizePolicy().hasHeightForWidth());
        depart->setSizePolicy(sizePolicy);
        depart->setMinimumSize(QSize(20, 15));
        depart->setFont(font1);

        horizontalLayout_3->addWidget(depart);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        line_3 = new QFrame(widget1);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        windowadd->setCentralWidget(centralwidget);

        retranslateUi(windowadd);

        QMetaObject::connectSlotsByName(windowadd);
    } // setupUi

    void retranslateUi(QMainWindow *windowadd)
    {
        windowadd->setWindowTitle(QApplication::translate("windowadd", "MainWindow", 0));
        pushButton->setText(QApplication::translate("windowadd", "\346\267\273\345\212\240", 0));
        pushButton_2->setText(QApplication::translate("windowadd", "\351\207\215\347\275\256", 0));
        label_4->setText(QApplication::translate("windowadd", "\346\217\220\347\244\272\344\277\241\346\201\257\357\274\232", 0));
        l_tip->setText(QApplication::translate("windowadd", "\350\257\267\345\210\267\345\215\241......", 0));
        label_3->setText(QApplication::translate("windowadd", "\345\267\245\345\217\267\357\274\232", 0));
        label->setText(QApplication::translate("windowadd", "\345\247\223\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("windowadd", "\346\211\200\345\261\236\351\203\250\351\227\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class windowadd: public Ui_windowadd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADD_H
