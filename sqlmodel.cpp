#include "sqlmodel.h"


sqlmodel* sqlmodel::model = NULL;

sqlmodel* sqlmodel::get_model()
{
    if(NULL == model){
        model = new sqlmodel();
    }
    return model;
}

sqlmodel::~sqlmodel()
{
    db.close();
}

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

sqlmodel::sqlmodel(QObject *parent)
{

    db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("kqj.db");
       if (!db.open()) {
           qDebug() << "Database Error!";
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
    return 0;
}

void sqlmodel::net_select()
{
    QSqlQuery query;
    QString sql_s = QString("SELECT * FROM net;");
    Net data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data.ip = query.value(0).toString();
        data.port = query.value(1).toString();
        emit sendNet(data);
    }
}

bool sqlmodel::net_insert(Net &data)
{
    QSqlQuery query;
    QString sql_d = "delete from net;";
    query.exec(sql_d);
    QString sql_s = QString("insert into net values('%1','%2');").arg(data.ip).arg(data.port);

    if(!query.exec(sql_s)){
        qDebug() << "insert Failed!"<<query.lastError();
        return false;
    }
    return true;
}

void sqlmodel::authority_select(QString rfid)
{
    QSqlQuery query;
    QString sql_s = QString("SELECT * FROM authority where rfid = '%1';").arg(rfid);
    QString data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data = query.value(0).toString();

        emit sendAuthority(data);
    }
}

void sqlmodel::authority_delete(QString rfid)
{
    QSqlQuery query;
    QString sql_s = QString("delete FROM authority where rfid = '%1';").arg(rfid);
    if(!query.exec(sql_s)){
        qDebug() << "delete Failed!"<<query.lastError();

    }

}

bool sqlmodel::authority_insert(QString rfid)
{
    QSqlQuery query;

    QString sql_s = QString("insert into authority values('%1');").arg(rfid);

    if(!query.exec(sql_s)){
        qDebug() << "insert Failed!"<<query.lastError();
        return false;
    }
    return true;

}

void sqlmodel::em_info_selectAll()
{
    QSqlQuery query;
    QString sql_s = QString("SELECT rfid FROM em_info;");
    Em_info data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data.rfid = query.value(0).toString();

        emit sendEm_info(data);
    }
}

void sqlmodel::em_info_selectforid(QString rfid)
{
    QSqlQuery query;
    QString sql_s = QString("SELECT * FROM em_info where rfid ='%1';").arg(rfid);
    Em_info data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data.id = query.value(0).toString();
        data.rfid = query.value(1).toString();
        data.name = query.value(2).toString();
        data.department = query.value(3).toString();
        data.icon = query.value(4).toString();
        emit sendEm_info(data);
    }
}

bool sqlmodel::em_info_insert(Em_info &info)
{
    QSqlQuery query;
    QString sql_s = QString("insert into em_info values('%1','%2','%3','%4','%5');").arg(info.id).arg(info.rfid).arg(info.name).arg(info.department).arg(info.icon);

    if(!query.exec(sql_s)){
        qDebug() << "insert Failed!"<<query.lastError();
        return false;
    }
    return true;
}

void sqlmodel::em_info_delete(QString rfid)
{
    QSqlQuery query;
    QString sql_s = QString("delete from em_info where rfid = '%1';").arg(rfid);
    if(!query.exec(sql_s)){
        qDebug() << "delete Failed!"<<query.lastError();

    }

}

void sqlmodel::em_info_deleteAll()
{
    QSqlQuery query;
    QString sql_s = QString("delete from em_info ;");
    if(!query.exec(sql_s)){
        qDebug() << "deleteAll Failed!"<<query.lastError();

    }

}

void sqlmodel::em_infos_selectAll()
{
    QSqlQuery query;
    QString sql_s = QString("SELECT rfid FROM em_infos;");
    Em_info data;
    if(!query.exec(sql_s)){
        qDebug() << "selectAll Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data.rfid = query.value(0).toString();

        emit sendEm_info(data);
    }
}

void sqlmodel::em_infos_selectforid(QString id)
{

}

void sqlmodel::em_infos_select_for_date_department(QString department, QString date)
{

}

void sqlmodel::em_infos_insert(Em_infos &info)
{

}

void sqlmodel::em_infos_delete(QString id)
{

}

void sqlmodel::em_infos_deleteAll()
{

}

void sqlmodel::em_infos_update(QString rfid, QString col_name, QString value)
{
    QSqlQuery query;
    QString sql_s = QString("update em_infos set %1 = '%2' where rfid = '%3';").arg(col_name).arg(value).arg(rfid);
    if(!query.exec(sql_s)){
        qDebug() << "update Failed!"<<query.lastError();

    }
}

void sqlmodel::rule_selectAll()
{
    QSqlQuery query;
    QString sql_s = QString("SELECT name FROM rule;");
    Rule data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data.name = query.value(0).toString();

        emit sendRule(data);
    }
}

void sqlmodel::rule_select(QString name)
{
    QSqlQuery query;
    QString sql_s = QString("SELECT * FROM rule where name = '%1';").arg(name);
    Rule data;
    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();
        return;
    }

    while(query.next()){
        data.name = query.value(0).toString();
        data.amg = query.value(1).toString();
        data.amo = query.value(2).toString();
        data.pmg = query.value(3).toString();
        data.pmo = query.value(4).toString();
        data.nmg = query.value(5).toString();
        data.nmo = query.value(6).toString();

        emit sendRule(data);
    }
}

bool sqlmodel::rule_insert(Rule &info)
{

}

void sqlmodel::rule_delete(QString name)
{

}

void sqlmodel::rule_deleteAll()
{

}

void sqlmodel::table_select(QString name)
{
    QSqlQuery query;
    QString sql_s = QString("select time from table where name = '%1';").arg(name);

    if(!query.exec(sql_s)){
        qDebug() << "select Failed!"<<query.lastError();

    }
    while(query.next()){
        QString data = query.value(0).toString();
        emit sendTable(data);
    }
}

bool sqlmodel::table_update(QString name, QString time)
{
    QSqlQuery query;
    QString sql_s = QString("update table set time = '%1' where name = '%2';").arg(time).arg(name);

    if(!query.exec(sql_s)){
        qDebug() << "update Failed!"<<query.lastError();
        return false;
    }
    return true;
}


