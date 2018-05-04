#ifndef JSON_H
#define JSON_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QJsonValue>
#include <QDebug>
#include <allstruct.h>


class json
{
public:
    json();
    ~json();
    void em_infos_tojson(QList<Em_infos> &em, QString &json);
    void rule_tojson(Rule &rule, QString &json);
    void add_tojson(QString value, QString &json);
    void json_toadd(QString &json, QList<QString> &list);

};

#endif // JSON_H
