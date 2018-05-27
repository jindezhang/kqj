#include "sys_config.h"

sys_config* sys_config::sys = NULL;



sys_config *sys_config::get_model()
{
    if(NULL == sys){
        sys = new sys_config();
    }
    return sys;
}

sys_config::~sys_config()
{

}


void sys_config::get_before(QString &before, QString &after)
{
    before = con.before;
    after = con.after;

}

void sys_config::get_rule(QString &da)
{
    da = con.rule;
}

void sys_config::get_rule_data(Rule &da)
{
    da = rule_data;
}

void sys_config::before_time(QString &b_time, QString &a_time, QString &time)
{
    //18：00

    int h;
    int m;
    int be;
    int af;
    int b_h;
    int b_m;
    int a_h;
    int a_m;


    QStringList list = time.split(":");
    h = list[0].toInt();
    m = list[1].toInt();

    be = con.before.toInt();
    af = con.after.toInt()+1;

    /*
     * 5 5
     * 00:00
     * 00-5 = 55
     * 00->23
     * 23:55
     *
     * 23:56
     * 56+5->1
     * 23->00
     * 00:01
     *
     * */
    if((m-be) > 0){
        b_h = h;
        b_m = m-be;
    }else{
        b_m = (m-be)+60;
        if((h-1)>= 0){
            b_h = h-1;
        }else
            b_h = h-1+24;
    }

    if((m+af) < 60){
        a_h = h;
        a_m = af+m;

    }else{
        a_m = af+m-60;
        if((h+1) <= 23)
            a_h = h+1;
        else
            a_h = h+1-24;
    }

    a_time = QString("0%1:%2").arg(a_h).arg(a_m);
    b_time = QString("0%1:%2").arg(b_h).arg(b_m);

}

void sys_config::split_time(int &h, int &m, QString time)
{
    if(time.contains(":"))
        return;
    QStringList list = time.split(":");
    h = list[0].toInt();
    m = list[1].toInt();
}

//如果可以考勤了，那么一段时间内，都是可以考勤阶段，直到遇到考勤结束点。

bool sys_config::is_kq(QString t, int &num)
{
    if(is_be(t, num)){

        //发送给UI当前的上班时间。
        QString d;
        sig_flag = num;
        if((num/2) == 0){
            d = QString("上班时间点:%1").arg(t_ontime[sig_flag]);
        }else{
            d = QString("下班时间点:%1").arg(t_ontime[sig_flag]);
        }
        emit ontime_show_(d);

        kq_flag = true;
    }
    if(is_af(t)){
        emit ontime_show_("当前非考勤时间段 ");
        kq_flag = false;
    }
    return kq_flag;
}

bool sys_config::is_be(QString t, int &num)
{
    for(int i = 0; i<6; i++){
        if(t_before[i].contains(t)){
            num = i;
            //qDebug()<<"is_be:"<<num;
            return true;
        }

    }
    return false;
}

bool sys_config::is_af(QString t)
{
    for(int i = 0; i<6; i++){
        if(t_after[i].contains(t)){
            return true;
        }
    }

    return false;
}

bool sys_config::is_ontime(QString t, int num)
{
    int h_on;
    int m_on;
    int h;
    int m;

    split_time(h, m, t);
    split_time(h_on, m_on, t_ontime[num]);

    int t_on = (h_on-h)*60+m_on-m;
    if(t_on >= 0)
        return true;
    else
        return false;

}

void sys_config::get_ontime(QString &t, int num)
{
    t = t_ontime[num];
}

void sys_config::sys_update()
{
    sql->config_select_all(con);
    sql->rule_selectAll(con.rule, rule_data);
    change_time();
}

int sys_config::sp_is_kq(QString t)
{
//    int h_cu;
//    int m_cu;
//    int h;
//    int m;
//    int mun;

//    QStringList list = t.split(":");
//    h_cu = list[0].toInt();
//    m_cu = list[1].toInt();


//    QStringList list = t_after[5].split(":");
//    h = list[0].toInt();
//    m = list[1].toInt();

//    mun = (h_cu-h)*60 + (m_cu-m);



}

void sys_config::test_start()
{
    QString curr_time = QTime::currentTime().toString("hh:mm");
    test_change_time(curr_time);
}

void sys_config::test_end()
{
    t_after[0] = QTime::currentTime().toString("hh:mm");
}

void sys_config::test_change_time(QString t)
{
    QString on;
    QString af;
    int i=0;
    t_before[i] = t;
    test_before_time(on, af, t_before[i]);
    t_ontime[i] = on;
    t_after[i] = af;

}

void sys_config::test_before_time(QString &o_time, QString &a_time, QString &time)
{
    //18：00

    int h;
    int m;
    int be;
    int af;
    int b_h;
    int b_m;
    int a_h;
    int a_m;


    QStringList list = time.split(":");
    h = list[0].toInt();
    m = list[1].toInt();

    be = con.before.toInt();
    af = con.after.toInt()+1;

    /*
     * 5 5
     * 00:00
     * 00-5 = 55
     * 00->23
     * 23:55
     *
     * 23:56
     * 56+5->1
     * 23->00
     * 00:01
     *
     * */
    if((m+be) < 60){
        b_h = h;
        b_m = m+be;
    }else{
        b_m = (m+be)-60;
        if((h+1)<= 23){
            b_h = h+1;
        }else
            b_h = h+1-24;
    }

    if((m+af+be) < 60){
        a_h = h;
        a_m = af+m+be;

    }else{
        a_m = af+m+be-60;
        if((h+1) <= 23)
            a_h = h+1;
        else
            a_h = h+1-24;
    }

    a_time = QString("0%1:%2").arg(a_h).arg(a_m);
    o_time = QString("0%1:%2").arg(b_h).arg(b_m);
}

void sys_config::change_time()
{
    int i=0;
    t_ontime[i] = rule_data.amg;
    i++;
    t_ontime[i] = rule_data.amo;
    i++;
    t_ontime[i] = rule_data.pmg;
    i++;
    t_ontime[i] = rule_data.pmo;
    i++;
    t_ontime[i] = rule_data.nmg;
    i++;
    t_ontime[i] = rule_data.nmo;

    QString tmp_be;
    QString tmp_af;
    for(int a = 0; a<6; a++){
        before_time(tmp_be, tmp_af, t_ontime[a]);
        if((a/2) == 0)
            t_before[a] = tmp_be;
        else
            t_before[a] = t_ontime[a];

        t_after[a] = tmp_af;
    }
}

sys_config::sys_config(QObject *parent)
{
    sql = sqlmodel::get_model();

    sys_update();
    sig_flag = -1;
}


