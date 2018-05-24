#ifndef SYS_CONFIG_H
#define SYS_CONFIG_H

#include <QObject>
#include <QString>
#include <allstruct.h>
#include <sqlmodel.h>

class sys_config : public QObject
{
    Q_OBJECT

public:
    static sys_config* get_model();
    ~sys_config();
    //void set_rule_data(Rule da);
    void get_before(QString &before, QString &after);
    void get_rule  (QString &da);
    void get_rule_data(Rule &da);

    void before_time(QString &b_time, QString &a_time, QString &time);//获取前后两个值。
    void split_time(int &h, int &m, QString time);//单独获取时间的时和分（int类型）


    //是否可以考勤的方法
    bool is_kq(QString t, int &num);
    bool is_be(QString t, int &num);
    bool is_af(QString t);

    //是否准点
    bool is_ontime(QString t, int num);
    void get_ontime(QString &t, int num);

    //更新配置信息。
    void sys_update();

    //特殊考勤
    int sp_is_kq(QString t);

    void test_start();
    void test_end();
    void test_change_time(QString t);
    void test_before_time(QString &o_time, QString &a_time, QString &time);
signals:
    void ontime_show_(QString t);

private:
    void change_time();
    explicit sys_config(QObject *parent = 0);
    sys_config(sys_config& s){}
    static sys_config* sys;
    config con;
    Rule rule_data;
    QString t_before[6];
    QString t_ontime[6];
    QString t_after[6];
    //QString kq_time[12];
    sqlmodel* sql;
    bool kq_flag;
    int sig_flag;//发送给UI的显示的上班时间。

};


#endif // SYS_CONFIG_H
