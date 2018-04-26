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
    void rule_tojson(QList<Rule> &rule, QString &json);
};

#endif // JSON_H
