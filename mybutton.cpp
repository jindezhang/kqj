#include "mybutton.h"
#include <QKeyEvent>
#include <QApplication>

myButton::myButton(QWidget *parent):QPushButton(parent)
{
    connect(this, SIGNAL(clicked(bool)),this, SLOT(button_clicked()));
}

myButton::~myButton()
{

}

void myButton::button_clicked()
{
    QString ch = this->text();
    QKeyEvent *key = new QKeyEvent(QEvent::KeyPress,ch.at(0).toLatin1(), Qt::NoModifier,ch);
    QApplication::postEvent(QApplication::focusWidget(), key);
}

