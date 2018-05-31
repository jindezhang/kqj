#include "windowlog.h"
#include "ui_windowlog.h"

windowlog::windowlog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowlog)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("windowlog{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("设置 >> 日志");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

    sql = sqlmodel::get_model();

    model = new QSqlTableModel();
    model->setTable("log");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("类型"));
    model->setHeaderData(1, Qt::Horizontal, tr("日期"));
    model->setHeaderData(2, Qt::Horizontal, tr("时间"));
    model->setHeaderData(3, Qt::Horizontal, tr("信息"));

    ui->table_record->setModel(model);
    for(int i = 0; i<3; i++){
        ui->table_record->setColumnWidth(i, 75);
    }
    ui->table_record->setColumnWidth(1, 145);
    ui->table_record->setColumnWidth(3, 500);

    set_Items();

}

windowlog::~windowlog()
{
    delete ui;
}

void windowlog::set_Items()
{
    ui->cbb_day->clear();
    ui->cbb_h->clear();
    ui->cbb_m->clear();
    ui->cbb_month->clear();
    ui->cbb_type->clear();
    ui->cbb_year->clear();

    QStringList list_name,list_y,list_m,list_d;
    sql->log_select_name(list_name);
    ui->cbb_type->addItems(list_name);


    sql->log_select_date(list_y,list_m,list_d);
    ui->cbb_day->addItems(list_d);
    ui->cbb_month->addItems(list_m);
    ui->cbb_year->addItems(list_y);

    QStringList list_h,list_mm;
    sql->log_select_time(list_h, list_mm);
    ui->cbb_m->addItems(list_mm);
    ui->cbb_h->addItems(list_h);
}

void windowlog::fanhui()
{
    ui->wg_top->is_net();
    this->parentWidget()->show();
    this->close();
}

void windowlog::on_bt_select_clicked()
{
    QString value;
    get_value(value);
    if(value == "null")
        model->setFilter(NULL);
    else
        model->setFilter(value);

    model->select();

    set_Items();
}

void windowlog::get_value(QString &value)
{
    QString date = QString("date='%1-%2-%3'").arg(ui->cbb_year->currentText()).arg(ui->cbb_month->currentText()).arg(ui->cbb_day->currentText());
    QString time = QString("time='%1:%2'").arg( ui->cbb_h->currentText()).arg(ui->cbb_m->currentText());
    QString type = QString("name='%1'").arg(ui->cbb_type->currentText());

    if((ui->cb_date->checkState() == Qt::Checked) && (ui->cb_time->checkState() == Qt::Checked) && (ui->cb_type->checkState() == Qt::Checked)){

        value = QString("%1 and %2 and %3").arg(date).arg(time).arg(type);

    }
    else if((ui->cb_date->checkState() == Qt::Checked) && (ui->cb_time->checkState() == Qt::Checked)){

        value = QString("%1 and %2").arg(date).arg(time);

    }
    else if((ui->cb_time->checkState() == Qt::Checked) && (ui->cb_type->checkState() == Qt::Checked)){

        value = QString("%1 and %2").arg(time).arg(type);

    }else if((ui->cb_date->checkState() == Qt::Checked) && (ui->cb_type->checkState() == Qt::Checked)){

        value = QString("%1 and %2").arg(date).arg(type);

    }else if((ui->cb_date->checkState() == Qt::Checked)){

        value = date;

    }else if(ui->cb_type->checkState() == Qt::Checked){

         value = type;

    }else if(ui->cb_time->checkState() == Qt::Checked){

        value = time;

    }else{
        value = "null";
    }
}
