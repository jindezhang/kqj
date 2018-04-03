#ifndef ALLSTRUCT
#define ALLSTRUCT

#include <QString>

struct Net
{
    QString ip;
    QString port;
};

struct Em_infos
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
    QString name;
    QString department;
    QString icon;

};

struct Table
{
    QString name;
    QString time;
};

#endif // ALLSTRUCT

