#include "downloadwindow.h"
#include "ui_downloadwindow.h"


#define PATH ""


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

//    //u盘的判断
//    QDir pan(PATH);
//    if(!pan.exists())

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

    ui->l_tip->hide();


    QString str;
    get_col(str);

    qDebug()<<str;
    qDebug()<<str;
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

    QByteArray qbdata;


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
    list<<"员工号";
    list<<"姓名";
    list<<"部门";
    list<<"日期";
    list<<"上午-上班";
    list<<"上午-下班";
    list<<"下午-上班";
    list<<"下午-下班";
    list<<"晚上-上班";
    list<<"晚上-下班";
    list<<"备注";

    for(int i = 0;i<list.size();i++){
        tmp = list[i];
        format_data(tmp);
        col.append(tmp);
    }
    col.append("\n");
}

void downloadWindow::on_bt_down_clicked()
{

}
