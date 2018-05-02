/********************************************************************************
** Form generated from reading UI file 'winbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINBUTTON_H
#define UI_WINBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <mybutton.h>

QT_BEGIN_NAMESPACE

class Ui_winButton
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    myButton *pushButton_2;
    myButton *pushButton;
    myButton *pushButton_3;
    myButton *pushButton_7;
    myButton *pushButton_8;
    myButton *pushButton_6;
    myButton *pushButton_12;
    myButton *pushButton_9;
    myButton *pushButton_11;
    myButton *pushButton_4;
    myButton *pushButton_5;
    QPushButton *bt_del;

    void setupUi(QWidget *winButton)
    {
        if (winButton->objectName().isEmpty())
            winButton->setObjectName(QStringLiteral("winButton"));
        winButton->resize(395, 220);
        layoutWidget = new QWidget(winButton);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 391, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new myButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new myButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new myButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_7 = new myButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new myButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_6 = new myButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_12 = new myButton(layoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_12, 2, 0, 1, 1);

        pushButton_9 = new myButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_9, 2, 1, 1, 1);

        pushButton_11 = new myButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_11, 2, 2, 1, 1);

        pushButton_4 = new myButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        pushButton_5 = new myButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_5, 3, 0, 1, 1);

        bt_del = new QPushButton(layoutWidget);
        bt_del->setObjectName(QStringLiteral("bt_del"));
        sizePolicy.setHeightForWidth(bt_del->sizePolicy().hasHeightForWidth());
        bt_del->setSizePolicy(sizePolicy);
        bt_del->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(bt_del, 3, 2, 1, 1);


        retranslateUi(winButton);

        QMetaObject::connectSlotsByName(winButton);
    } // setupUi

    void retranslateUi(QWidget *winButton)
    {
        winButton->setWindowTitle(QApplication::translate("winButton", "Form", 0));
        pushButton_2->setText(QApplication::translate("winButton", "2", 0));
        pushButton->setText(QApplication::translate("winButton", "1", 0));
        pushButton_3->setText(QApplication::translate("winButton", "3", 0));
        pushButton_7->setText(QApplication::translate("winButton", "4", 0));
        pushButton_8->setText(QApplication::translate("winButton", "5", 0));
        pushButton_6->setText(QApplication::translate("winButton", "6", 0));
        pushButton_12->setText(QApplication::translate("winButton", "7", 0));
        pushButton_9->setText(QApplication::translate("winButton", "8", 0));
        pushButton_11->setText(QApplication::translate("winButton", "9", 0));
        pushButton_4->setText(QApplication::translate("winButton", "0", 0));
        pushButton_5->setText(QApplication::translate("winButton", ".", 0));
        bt_del->setText(QApplication::translate("winButton", "<", 0));
    } // retranslateUi

};

namespace Ui {
    class winButton: public Ui_winButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINBUTTON_H
