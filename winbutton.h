#ifndef WINBUTTON_H
#define WINBUTTON_H

#include <QWidget>

namespace Ui {
class winButton;
}

//键盘大小 395*220
class winButton : public QWidget
{
    Q_OBJECT

public:
    explicit winButton(QWidget *parent = 0);
    ~winButton();

private slots:
    void on_bt_del_clicked();

signals:
    void click_del();

private:
    Ui::winButton *ui;
};

#endif // WINBUTTON_H
