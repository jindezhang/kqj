#ifndef SQLMODEL_H
#define SQLMODEL_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <allstruct.h>

/*数据库的操作，select到的数据通过信号发送出去
 * insert 之后，注意delete对应的结构体
 *
 *
 * */

class sqlmodel : public QObject
{
    Q_OBJECT

public:
    static sqlmodel* get_model();
    ~sqlmodel();
    bool doConnect(const QString &dbName);
    void doClose();

    int sql_count(QString table);

    //服务器表的操作，插入前，删除。
    void net_select();
    bool net_insert(Net &data);

//    权限表，用于进入主菜单的操作。
    void authority_select(QString rfid);//权限
    void authority_delete(QString rfid);
    bool authority_insert(QString rfid);

//    员工数据，未考勤前的数据
    void em_info_selectAll();//获取员工的rfid信息。
    void em_info_selectforid(QString rfid);
    bool em_info_insert(Em_info &info);
    void em_info_delete(QString rfid);
    void em_info_deleteAll();

//    员工考勤数据
    void em_infos_selectAll();
    void em_infos_selectforid(QString id);
//    void em_infos_selectfordepartment(QString department);
//    void em_infos_selectfordate(QString date);
//    同时查找日期和部门，不需要某一部分的时候，参数为NULL;
    void em_infos_select_for_date_department(QString department,QString date);
    void em_infos_insert(Em_infos &info);
    void em_infos_delete(QString id);
    void em_infos_deleteAll();
    void em_infos_update(QString rfid, QString col_name, QString value);

//    考勤规则
    void rule_selectAll();//获取考勤规则的name；
    void rule_select(QString name);
    bool rule_insert(Rule &info);
    void rule_delete(QString name);
    void rule_deleteAll();

    void table_select(QString name);
    bool table_update(QString name,QString time);

    //接收者：结构体引用
signals:
    void sendNet(Net data);
    void sendEm_infos(Em_infos data);
    void sendEm_info(Em_info data);
    void sendRule(Rule data);
    void sendTable(QString time);
    void sendAuthority(QString rfid);

private:
    explicit sqlmodel(QObject *parent = 0);
    QSqlDatabase db;
    sqlmodel(sqlmodel& s){}
    static sqlmodel *model;


};

#endif // SQLMODEL_H
