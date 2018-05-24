#include "windowdownload.h"
#include "ui_downloadwindow.h"
#include <QMessageBox>

//U盘的文件系统，必须是FAT文件系统
#define PATH "/mnt/udisk/DH_data"
#define UPAN "/mnt/udisk"

downloadWindow::downloadWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::downloadWindow)
{
    ui->setupUi(this);
    //页面布局的设置
    setStyleSheet("downloadWindow{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    ui->wg_top->setDir("下载");
//    top事件
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

    ui->cb_date->setChecked(true);
    ui->l_tip->hide();

    //u盘插入的判断
    QDir pan(UPAN);
    if(!pan.exists()){
       QMessageBox::warning(this, "提示","请插入U盘！");
       //ui->bt_down->setEnabled(false);
    }

    //日期和部门的设置
    sql = sqlmodel::get_model();
    QStringList list_departmet;
    sql->em_infos_select_department(list_departmet);
    ui->cbb_depart->addItems(list_departmet);

    QStringList year,month,day;
    sql->em_infos_select_date(year,month,day);
    ui->cbb_year->addItems(year);
    ui->cbb_day->addItems(day);
    ui->cbb_month->addItems(month);

    //连接关联数据库
   // connect(sql,SIGNAL(sendEm_infos(Em_infos)),this,SLOT(get_data(Em_infos));


}

downloadWindow::~downloadWindow()
{
    delete ui;
}

void downloadWindow::fanhui()
{
    this->parentWidget()->show();
    this->close();
}

void downloadWindow::on_cb_all_clicked(bool checked)
{
    bt_enable(!checked);
}

void downloadWindow::get_data(Em_infos data)
{

}

void downloadWindow::bt_enable(bool state)
{
    ui->cb_date->setChecked(state);
    ui->cb_date->setEnabled(state);
    ui->cb_depart->setChecked(state);
    ui->cb_depart->setEnabled(state);
}

bool downloadWindow::check_filename(QString name)
{
    QFile file(name);
    if(file.exists()){
        return true;
    }
    return false;
}

bool downloadWindow::write_data(QString data)
{
    QDir dir(PATH);
    if(!dir.exists())
        dir.mkdir(PATH);
    QString filename;
    filename = QString("%1/data.txt").arg(PATH);

    int i = 1;
    while(check_filename((filename))){
        filename.clear();
        filename = QString("%1/data_%2.txt").arg(PATH).arg(i);
        i++;
    }
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug()<<"open failed";
        return false;
    }
    QString col;
    get_col(col);
    QByteArray qbdata = col.toLatin1();
    qbdata.append(data);


    if(-1 == file.write(qbdata)){
        file.close();
        return false;
    }

    file.close();
    return true;


}

bool downloadWindow::write_json(QString &data)
{
    QDir dir(PATH);
    if(!dir.exists())
        dir.mkdir(PATH);
    QString filename;
    filename = QString("%1/json.txt").arg(PATH);

    int i = 1;
    while(check_filename((filename))){
        filename.clear();
        filename = QString("%1/json_%2.txt").arg(PATH).arg(i);
        i++;
    }
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug()<<"open failed";
        return false;
    }

    QByteArray qbdata;
    qbdata.append(data);


    if(-1 == file.write(qbdata)){
        file.close();
        return false;
    }

    file.close();
    return true;
}

void downloadWindow::format_data(QString &str)
{
    for(int i = str.size(); i < 10;i++){
        str.append(" ");
    }
}

void downloadWindow::get_col(QString &col)
{
    QStringList list;
    QString tmp;
//    list<<"'员工号'";
//    list<<"姓名";
//    list<<"部门";
//    list<<"日期";
//    list<<"上午-上班";
//    list<<"上午-下班";
//    list<<"下午-上班";
//    list<<"下午-下班";
//    list<<"晚上-上班";
//    list<<"晚上-下班";
//    list<<"备注";
    list<<"ID";
    list<<"Name";
    list<<"Department";
    list<<"Date";
    list<<"AM-ON";
    list<<"AM-OFF";
    list<<"PM-ON";
    list<<"PM-OFF";
    list<<"NM-ON";
    list<<"NM-OFF";
    list<<"Info";

    for(int i = 0;i<list.size();i++){
        tmp = list[i];
        format_data(tmp);
        col.append(tmp);
    }
    col.append("\n");
}

void downloadWindow::on_bt_down_clicked()
{
    QString date = QString("%1-%2-%3").arg(ui->cbb_year->currentText()).arg(ui->cbb_month->currentText()).arg(ui->cbb_day->currentText());
    QString department = QString("%1").arg( ui->cbb_depart->currentText());

    QString sql_data;
    QList <Em_infos> list_data;
    QString str_data;

    if(ui->cb_all->checkState() == Qt::Checked){
        sql->em_infos_select_for_date_department(NULL,NULL,sql_data);
        sql->em_infos_select_for_date_department_json(NULL,NULL,list_data);
    }else if(ui->cb_date->checkState() == Qt::Checked && ui->cb_depart->checkState() == Qt::Checked){
        sql->em_infos_select_for_date_department(department,date,sql_data);
        sql->em_infos_select_for_date_department_json(department,date,list_data);
    }else if(ui->cb_date->checkState() == Qt::Checked){
        sql->em_infos_select_for_date_department(NULL,date,sql_data);
        sql->em_infos_select_for_date_department_json(NULL,date,list_data);
    }else if(ui->cb_depart->checkState() == Qt::Checked){
        sql->em_infos_select_for_date_department(department,NULL,sql_data);
        sql->em_infos_select_for_date_department_json(department,NULL,list_data);
    }else{
        QMessageBox::warning(this, "提示","请选择下载的条件");
        return;
    }
    ui->l_tip->show();
    ui->bt_down->setEnabled(false);

    json js;
    js.em_infos_tojson(list_data, str_data);
    if(write_data(sql_data) &&  write_json(str_data)){
        QMessageBox::warning(this, "提示","下载成功！");

    }else{
        QMessageBox::warning(this, "提示","下载失败");
    }
    ui->l_tip->hide();
    ui->bt_down->setEnabled(true);

}
