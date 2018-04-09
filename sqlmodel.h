#ifndef SQLMODEL_H
#define SQLMODEL_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <allstruct.h>


class sqlmodel : public QObject
{
    Q_OBJECT

public:
//    explicit sqlmodel(QObject *parent = 0);
//    ~sqlmodel();
    bool doConnect(const QString &dbName);
    void doClose();


//    void sql_select(QString table);
//    void sql_insert(QString sql_i);
//    void sql_delete(QString sql_d);

//    int sql_count(QString table);
//    void net_select();
//    bool net_insert(QString *sql_i);

//    void authority_select(QString id);//权限
//    bool authority_delete(QString id);
//    bool authority_insert(QString id);

//    void em_info_selectforid(QString id);
//    bool em_info_insert(Em_info *info);
//    bool em_info_delete(QString id);
//    bool em_info_deleteAll();

//    void em_infos_selectforid(QString id);
//    bool em_infos_insert(Em_infos *info);
//    bool em_infos_delete(QString id);
//    bool em_infos_deleteAll();

//    void rule_select(QString id);
//    bool rule_insert(Rule *info);
//    bool rule_delete(QString id);
//    bool rule_deleteAll();
//    void table_select();

signals:
    void sendData(Net data);
private:
    QSqlDatabase db;

};

#endif // SQLMODEL_H
