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


    void sql_select(QString table);
    void sql_insert(QString sql_i);
    void sql_delete(QString sql_d);

    int sql_count(QString table);
    void net_select();
    void net_insert(QString *sql_i);

    void authority_select();
    void em_info_select();
    void em_infos_select();
    void rule_select();
    void table_select();

signals:
    void sendData(Net data);
private:
    QSqlDatabase db;

};

#endif // SQLMODEL_H
