#ifndef ALLSTRUCT
#define ALLSTRUCT

#include <QString>


// 程序使用数据结构定义

//保存服务器数据数据结构
struct Net
{
    QString ip;
    QString port;
};

//保存系统配置信息数据结构
struct config
{
    QString device;
    QString ip;
    QString port;
    QString rule;
    QString before;
    QString after;
    QString upload;
};

//保存已经考勤完成的员工记录数据结构--时间点
struct Em_infos
{
    QString id;
    QString name;
    QString department;
    QString date;
    QString amg;
    QString amo;
    QString pmg;
    QString pmo;
    QString nmg;
    QString nmo;
    QString info;
};

//保存已经考勤完成的员工记录数据结构--时间点对应的考勤状态（准点、迟到等）
struct Em_infos_state
{
    QString id;
    QString date;
    QString amg;
    QString amo;
    QString pmg;
    QString pmo;
    QString nmg;
    QString nmo;

};

//保存终端使用的考勤规则数据结构
struct Rule
{

    QString name;
    QString amg;
    QString amo;
    QString pmg;
    QString pmo;
    QString nmg;
    QString nmo;
};

//保存员工信息数据结构
struct Em_info
{
    QString id;
    QString rfid;
    QString name;
    QString department;
    QString icon;
    QString info;

};

//保存表状态数据结构
struct Table
{
    QString name;
    QString time;
};

//保存系统日志信息数据结构
struct Log
{
    QString id;
    QString name;
    QString time;
    QString info;

};

#endif // ALLSTRUCT

