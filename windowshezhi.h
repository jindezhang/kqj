#ifndef WINDOWSHEZHI_H
#define WINDOWSHEZHI_H

#include <QMainWindow>
#include <windownet.h>
#include <netmodel.h>

namespace Ui {
class windowshezhi;
}

class windowshezhi : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowshezhi(QWidget *parent = 0);
    ~windowshezhi();
public slots:
    void fanhui();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::windowshezhi *ui;
    netwindow* w;
    netmodel* net;
};

#endif // WINDOWSHEZHI_H
