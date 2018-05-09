#include "windowrule.h"
#include "ui_rulewindow.h"
#include <QDebug>

rulewindow::rulewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rulewindow)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("rulewindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("考勤规则");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

//    rule表的显示
    sql = sqlmodel::get_model();
    model = new QSqlTableModel();
    model->setTable("rule");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    int i=0;
    model->setHeaderData(i++, Qt::Horizontal, tr("规则名"));
    model->setHeaderData(i++, Qt::Horizontal, tr("上午-上班"));
    model->setHeaderData(i++, Qt::Horizontal, tr("上午-下班"));
    model->setHeaderData(i++, Qt::Horizontal, tr("下午-上班"));
    model->setHeaderData(i++, Qt::Horizontal, tr("下午-下班"));
    model->setHeaderData(i++, Qt::Horizontal, tr("晚上-上班"));
    model->setHeaderData(i++, Qt::Horizontal, tr("晚上-下班"));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,110);
    for(int n = 1;n<i;n++)
        ui->tableView->setColumnWidth(n,62);

//   获取rule的名字
    sql->rule_selectAll(list_rule);
    ui->cbb_name->addItems(list_rule);

    sql->config_select(curr_rule);
    ui->l_name->setText(curr_rule);

//    小时和分钟的布局
    QStringList tmplist;

    for(int i = 0;i<24;i++){
        if(i<10){
            tmplist<<QString("0%1").arg(i);
        }else{
            tmplist<<QString("%1").arg(i);
        }
    }

    ui->cbb_h->addItems(tmplist);
    tmplist.clear();
    for(int i = 0;i<60;i++){
        if(i<10){
            tmplist<<QString("0%1").arg(i);
        }else{
            tmplist<<QString("%1").arg(i);
        }
    }
    ui->cbb_m->addItems(tmplist);

    //网络
    net = netmodel::get_net();
    connect(net, SIGNAL(rule_sig(QString)), this, SLOT(change_ok(QString)));
    com_change = 0;

    //更换考勤规则定时器。
     t = new QTimer();
     connect(t, SIGNAL(timeout()), this, SLOT(change_no()));
}

rulewindow::~rulewindow()
{
    delete ui;
}

void rulewindow::removeALLcbb()
{
    int atmp = ui->cbb_name->count()-1;
    qDebug()<<"atmp:"<<atmp;
    for(;atmp >= 0;atmp--){
        ui->cbb_name->removeItem(atmp);
    }

    while(ui->cbb_name->count() != 0){
        qDebug()<<"while~";
    }
}

void rulewindow::fanhui()
{
    this->parentWidget()->show();
    this->close();
}

void rulewindow::change_ok(QString json)
{
    if(0 == com_change){
        return;
    }
    if(json.contains("false")){
        change_no();
        return;
    }

    sql->config_insert(ui->cbb_name->currentText());
    ui->l_name->setText(ui->cbb_name->currentText());
    QMessageBox::warning(this, "tip", "更换成功!");
    set_bt(true);
    t->stop();
    com_change = 0;
}

void rulewindow::change_no()
{
    QMessageBox::warning(this, "tip", "更换失败!");
    set_bt(true);
    t->stop();
    com_change = 0;
}

void rulewindow::on_bt_del_clicked()
{
    QString tmp = ui->cbb_name->currentText();
    if(tmp == "DH1"){
        QMessageBox::warning(this,"提示","这是默认的考勤规则，无法删除！");
        return;
    }
    if (QMessageBox::Yes == QMessageBox::question(this,
                                                  tr("Question"),
                                                  tr("删除后，无法恢复。确认[%1]删除吗?").arg(tmp),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes)) {

        if(tmp == ui->l_name->text()){
            QMessageBox::warning(this,"提示","这是当前使用的考勤规则，无法删除。请更换后删除！");
            return;
        }
        sql->rule_delete(ui->cbb_name->currentText());
    //   获取rule的名字
        list_rule.clear();
        sql->rule_selectAll(list_rule);
        ui->cbb_name->clear();
        ui->cbb_name->addItems(list_rule);
        model->select();
    } else {
        return;
    }
}

void rulewindow::on_bt_change_clicked()
{
    QString tmp = ui->cbb_name->currentText();
    if (QMessageBox::Yes == QMessageBox::question(this,
                                                  tr("Question"),
                                                  tr("确认更换为[%1]吗?").arg(tmp),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes)) {

        Rule r;
        QString json_rule;
        sql->rule_selectAll(ui->cbb_name->currentText(), r);
        ch.rule_change(r);
        jsonc.rule_tojson(r, json_rule);
        net->send_data(json_rule);
        t->start(5000);
        set_bt(false);
        com_change = 1;
    } else {
        return;
    }

}

void rulewindow::on_pushButton_clicked()
{
    QString tmp = QString("%1:%2").arg(ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    ui->amg->setText(tmp);
}

void rulewindow::on_pushButton_2_clicked()
{
    QString tmp = QString("%1:%2").arg(ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    ui->amo->setText(tmp);
}

void rulewindow::on_pushButton_3_clicked()
{
    QString tmp = QString("%1:%2").arg(ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    ui->pmg->setText(tmp);
}

void rulewindow::on_pushButton_4_clicked()
{
    QString tmp = QString("%1:%2").arg(ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    ui->pmo->setText(tmp);
}

void rulewindow::on_pushButton_5_clicked()
{
    QString tmp = QString("%1:%2").arg(ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    ui->nmg->setText(tmp);
}

void rulewindow::on_pushButton_6_clicked()
{
    QString tmp = QString("%1:%2").arg(ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    ui->nmo->setText(tmp);
}

void rulewindow::on_pushButton_8_clicked()
{
    ui->amg->setText("");
    ui->amo->setText("");
    ui->pmg->setText("");
    ui->pmo->setText("");
    ui->nmg->setText("");
    ui->nmo->setText("");
}

void rulewindow::on_add_clicked()
{

    QString d = QDate::currentDate().toString("yyyy");
    d.append(QDate::currentDate().toString("MM"));
    d.append(QDate::currentDate().toString("dd"));
    d.append(QTime::currentTime().toString("hh"));
    d.append(QTime::currentTime().toString("mm"));
    d.append(QTime::currentTime().toString("ss"));
    rule_data.name = d;
    rule_data.amg = ui->amg->text();
    rule_data.amo = ui->amo->text();
    rule_data.pmg = ui->pmg->text();
    rule_data.pmo = ui->pmo->text();
    rule_data.nmg = ui->nmg->text();
    rule_data.nmo = ui->nmo->text();

    if(sql->rule_insert(rule_data)){
        QString t = QString("[%1]添加到本地成功！").arg(rule_data.name);
        QMessageBox::warning(this,"提示",t);
        on_pushButton_8_clicked();
    }else{
        QMessageBox::warning(this,"提示","添加到本地失败！");
    }
//   获取rule的名字
    list_rule.clear();
    sql->rule_selectAll(list_rule);
    ui->cbb_name->clear();
    ui->cbb_name->addItems(list_rule);
    model->select();

}

void rulewindow::add_status(QString json)
{
    if(json == "flase"){
         QMessageBox::warning(this,"提示","添加失败！");
         return;
    }

}

void rulewindow::set_bt(bool b)
{
    ui->bt_change->setEnabled(b);
    ui->bt_del->setEnabled(b);

}
