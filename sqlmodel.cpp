#include "sqlmodel.h"



bool sqlmodel::doConnect(const QString &dbName)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName(dbName);
       if (!db.open()) {
           qDebug() << "Database Error!";
           return false;
       }
       return true;
}

void sqlmodel::doClose()
{
    db.close();
}



void sqlmodel::sql_select(QString table)
{
    QSqlQuery query;
    QString sql_s = QString("SELECT *FROM %1;").arg(table);
    Net data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!";
        return;
    }

    while(query.next()){
        data.ip = query.value(0).toString();
        data.port = query.value(1).toString();
        emit sendData(data);
    }
}

int sqlmodel::sql_count(QString table)
{
    QSqlQuery query;
    QString sql = QString("select count(*) from %1;").arg(table);
    qDebug()<<sql;
    if( !query.exec(sql)){
        return -1;
    }
    while(query.next()){
     return query.value(0).toInt();
    }
    return -1;
}

void sqlmodel::net_select()
{
    QSqlQuery query;
    QString sql_s = QString("SELECT *FROM net;");
    Net data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!";
        return;
    }

    while(query.next()){
        data.ip = query.value(0).toString();
        data.port = query.value(1).toString();
        emit sendData(data);
    }
}

void sqlmodel::em_info_select()
{
    QSqlQuery q;
    QString s = "select * from em_info;";
    Em_info data;
}

