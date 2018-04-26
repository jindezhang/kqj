#include "json.h"


/*

  {
    "commad":"em_infos",
    "data":[
           {},{}
    ]

  }
  */
json::json()
{

}

json::~json()
{

}

void json::em_infos_tojson(QList <Em_infos> &em, QString &json)
{
    Em_infos tmp_em;
    QJsonObject data;//记录对象
    QJsonArray arr;
    QJsonObject obj;//json对象
    QJsonDocument doc;//json文档

   QList <Em_infos>::iterator iter;
   for(iter = em.begin(); iter != em.end(); iter++){
       tmp_em = *iter;
       data.insert("id",tmp_em.id);
       data.insert("name",tmp_em.name);
       data.insert("department",tmp_em.department);
       data.insert("date",tmp_em.date);
       data.insert("amg",tmp_em.amg);
       data.insert("amo",tmp_em.amo);
       data.insert("pmg",tmp_em.pmg);
       data.insert("pmo",tmp_em.pmo);
       data.insert("nmg",tmp_em.nmg);
       data.insert("nmo",tmp_em.nmo);
       data.insert("info",tmp_em.info);

       arr.append(QJsonValue(data));
   }

    obj.insert("command","em_infos");
    obj.insert("data",QJsonValue(arr));

    doc.setObject(obj);
    QByteArray byteArra = doc.toJson(QJsonDocument::Compact);
    json = QString(byteArra);

}



void json::rule_tojson(QList<Rule> &rule, QString &json)
{

}
