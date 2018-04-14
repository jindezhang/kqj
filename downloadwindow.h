#ifndef DOWNLOADWINDOW_H
#define DOWNLOADWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QDir>
#include <QByteArray>
#include <sqlmodel.h>


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

    void on_bt_down_clicked();

private:
    Ui::downloadWindow *ui;
    void bt_enable(bool state);
    bool check_filename(QString name);
    bool write_data(QString data);
    void format_data(QString &str);//数据的格式化;
    void get_col(QString &col);
    sqlmodel *sql;
};

#endif // DOWNLOADWINDOW_H
