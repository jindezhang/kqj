#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class myButton : public QPushButton
{
    Q_OBJECT
public:
    explicit myButton(QWidget *parent = Q_NULLPTR);
    ~myButton();

signals:

public slots:
    void button_clicked();
};

#endif // MYBUTTON_H
