#ifndef WINDOWSTART_H
#define WINDOWSTART_H

#include <QMainWindow>

namespace Ui {
class windowstart;
}

class windowstart : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowstart(QWidget *parent = 0);
    ~windowstart();

public slots:
    void fanhui();

private:
    Ui::windowstart *ui;
};

#endif // WINDOWSTART_H
