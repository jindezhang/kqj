#ifndef WINDOWSTART_H
#define WINDOWSTART_H

#include <QMainWindow>
#include <netmodel.h>
#include <sqlmodel.h>
#include <json.h>
#include <QTimer>
#include <sys_config.h>
#include <beep.h>
#include <mythread.h>

/*
 * 考勤状态分为：准时、迟到、缺勤、早退。
 * 一天多个状态时，怎么弄？
 * */
namespace Ui {
class windowstart;
}

class windowstart : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowstart(QWidget *parent = 0);
    ~windowstart();
    void kq_ok(QString info);//显示考勤成功
    void kq_no();//显示考试失败
    void kq_ed();//显示考勤已经
    void kq_out();//显示考勤不能考勤
    void kq_err();//显示考勤错误
    void is_kq();//判断是否已经考勤

    void show_em(Em_info &em);//显示员工数据
    void get_time_point(QString &t);//获取时间段的字符值


public slots:
    void fanhui();
    void mycontrll();//时间控制器
    void bp_ok();//考勤成功的蜂鸣；
    void bp_no();//考勤不成功的蜂鸣；
private slots:
    void get_em(QString json);//获取员工数据
    void post_ems(QString json);//上发员工数据
    void get_over(QString json);
    void get_rfid(int rfid);
    void on_bt_card_clicked();
    void clean_ui();
    void ontime_show(QString _time);
    void on_bt_card_down_clicked();
    void auth_rfid(QString _rfid);
    void on_bt_card_up_clicked();

    void on_bt_start_clicked();

    void on_bt_end_clicked();
    void close_bp();
private:
    Ui::windowstart *ui;
    netmodel* net;
    sqlmodel* sql;
    json jsonc;
    QTimer* t_clean;
    QTimer* t_contrll;
    Beep* bp;//蜂鸣器
    QTimer* bp_qt;
    int time_num;//是那个时间段的点。
    QString myrfid;//刷卡模块得到的rfid
    QStringList rfid_ed;//已经考勤了的。
    QStringList rfid_in;//还没考勤的。
    QString time_curr;//记录当前时间。
    QString t_ontime;//判断是否准点。
    QStringList rfid_list;//数据库中的rfid列表。
    sys_config* mysys;
    int mykq_flag;//判断是否开启、结束考勤标记，0表示考勤结束，把rfid_in,的人都加入到缺勤状态；1表示考勤开始，更新rfid_ed,rfid_in.。
    bool kq_is;
    myThread* mythread;
};

#endif // WINDOWSTART_H
