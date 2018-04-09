/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *l_date;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *l_time;
    QLabel *l_net;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_16;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 346, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        l_date = new QLabel(horizontalLayoutWidget);
        l_date->setObjectName(QStringLiteral("l_date"));
        sizePolicy.setHeightForWidth(l_date->sizePolicy().hasHeightForWidth());
        l_date->setSizePolicy(sizePolicy);
        l_date->setMinimumSize(QSize(100, 20));
        l_date->setFont(font);

        horizontalLayout->addWidget(l_date);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        l_time = new QLabel(horizontalLayoutWidget);
        l_time->setObjectName(QStringLiteral("l_time"));
        sizePolicy.setHeightForWidth(l_time->sizePolicy().hasHeightForWidth());
        l_time->setSizePolicy(sizePolicy);
        l_time->setMinimumSize(QSize(100, 20));
        l_time->setFont(font);

        horizontalLayout->addWidget(l_time);

        l_net = new QLabel(centralWidget);
        l_net->setObjectName(QStringLiteral("l_net"));
        l_net->setGeometry(QRect(660, 90, 51, 31));
        sizePolicy.setHeightForWidth(l_net->sizePolicy().hasHeightForWidth());
        l_net->setSizePolicy(sizePolicy);
        l_net->setFont(font);
        l_net->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 0, 231, 91));
        QFont font1;
        font1.setPointSize(25);
        label->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 170, 80, 80));
        label_6->setMinimumSize(QSize(80, 80));
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(160, 170, 80, 80));
        label_10->setMinimumSize(QSize(80, 80));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(520, 170, 80, 80));
        label_12->setMinimumSize(QSize(80, 80));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 300, 80, 80));
        label_8->setMinimumSize(QSize(80, 80));
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(340, 300, 80, 80));
        label_14->setMinimumSize(QSize(80, 80));
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(520, 300, 80, 80));
        label_16->setMinimumSize(QSize(80, 80));
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 260, 91, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 260, 91, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 390, 91, 31));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 390, 91, 31));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(520, 260, 91, 31));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(340, 390, 91, 31));
        pushButton_6->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237\357\274\232", 0));
        l_date->setText(QApplication::translate("MainWindow", "xxxx-xx-xx", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", 0));
        l_time->setText(QApplication::translate("MainWindow", "00:00 00", 0));
        l_net->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234", 0));
        label->setText(QApplication::translate("MainWindow", "LOGO", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0));
        label_12->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0));
        label_8->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0));
        label_14->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0));
        label_16->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\270\213\350\275\275", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\350\200\203\345\213\244", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\200\203\345\213\244\346\237\245\350\257\242", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\221\230\345\267\245", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\200\203\345\213\244\350\247\204\345\210\231", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
