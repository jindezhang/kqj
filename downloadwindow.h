#ifndef DOWNLOADWINDOW_H
#define DOWNLOADWINDOW_H

#include <QMainWindow>

namespace Ui {
class downloadWindow;
}

class downloadWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit downloadWindow(QWidget *parent = 0);
    ~downloadWindow();
public slots:
    void fanhui();

private slots:
    void on_cb_all_clicked(bool checked);

private:
    Ui::downloadWindow *ui;
    void bt_enable(bool state);
};

#endif // DOWNLOADWINDOW_H
