#ifndef ALLSTRUCT
#define ALLSTRUCT

#include <QString>

//保存服务器数据
struct Net
{
    QString ip;
    QString port;
};

struct config
{
    QString ip;
    QString port;
    QString rule;
    QString before;
    QString after;

};

//保存已经考勤完成的员工记录
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

struct Em_info
{
    QString id;
    QString rfid;
    QString name;
    QString department;
    QString icon;
    QString info;

};

struct Table
{
    QString name;
    QString time;
};

#endif // ALLSTRUCT

