#ifndef WINDOWADD_H
#define WINDOWADD_H

#include <QMainWindow>

namespace Ui {
class windowadd;
}

class windowadd : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowadd(QWidget *parent = 0);
    ~windowadd();
public slots:
    void fanhui();

private:
    Ui::windowadd *ui;
};

#endif // WINDOWADD_H
