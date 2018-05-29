#include "windowselectforid.h"
#include "ui_selectforid.h"
#include <QDebug>
#include <QTime>
#include <QDate>
#include <QString>

selectforid::selectforid(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectforid)
{
    qDebug()<<"::selectforid1";
    ui->setupUi(this);
    setStyleSheet("selectforid{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    //页面布局的设置
    ui->wg_top->setDir("考勤查询");
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));
   // qDebug()<<"::selectforid0";

    //查询按钮的时间延时。
    t_select = new QTimer();
    connect(t_select,SIGNAL(timeout()),this,SLOT(bt_enable()));
   // qDebug()<<"::selectforid2";

    ui->cb_depart->setChecked(true);
    ui->cb_am->setChecked(true);
    ui->cb_date->setChecked(true);
    ui->cb_pm->setChecked(true);
    ui->cb_nm->setChecked(true);
   // qDebug()<<"::selectforid3";

    sql = sqlmodel::get_model();
   // qDebug()<<"::selectforid5";

    model = new QSqlTableModel();
      model->setTable("em_infos");
      model->setEditStrategy(QSqlTableModel::OnManualSubmit);

      model->select();
      model->setHeaderData(0, Qt::Horizontal, tr("员工号"));
      model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
      model->setHeaderData(2, Qt::Horizontal, tr("部门"));
      model->setHeaderData(3, Qt::Horizontal, tr("日期"));
      model->setHeaderData(4, Qt::Horizontal, tr("上午-上班"));
      model->setHeaderData(5, Qt::Horizontal, tr("上午-下班"));
      model->setHeaderData(6, Qt::Horizontal, tr("下午-上班"));
      model->setHeaderData(7, Qt::Horizontal, tr("下午-下班"));
      model->setHeaderData(8, Qt::Horizontal, tr("晚上-上班"));
      model->setHeaderData(9, Qt::Horizontal, tr("晚上-下班"));
      model->setHeaderData(10, Qt::Horizontal, tr("备注"));
   // qDebug()<<"::selectforid11";
      ui->table_record->setModel(model);
   // qDebug()<<"::selectforid66";
      ui->table_record->setColumnWidth(0,73);
      ui->table_record->setColumnWidth(1,100);
      ui->table_record->setColumnWidth(2,80);
      ui->table_record->setColumnWidth(3,150);
      for(int i = 4;i<11;i++){
          ui->table_record->setColumnWidth(i,103);
      }
   // qDebug()<<"::selectforid88";
      //view->setModel(model);
      //view->hideColumn(0); // don't show the ID
      //view->show();

    //获取选中的值
   // qDebug()<<ui->comboBox->currentText();

      //list_departmet = new QStringList();

      //日期和部门的设置
      sql->em_infos_select_department(list_departmet);
      ui->cbb_depart->addItems(list_departmet);

      QStringList year,month,day;
      sql->em_infos_select_date(year,month,day);
      ui->cbb_year->addItems(year);
      ui->cbb_day->addItems(day);
      ui->cbb_month->addItems(month);

//    list<<"人事部"<<"技术部";
//    ui->cbb_depart->addItems(list);
    qDebug()<<"::selectforid100";
}

selectforid::~selectforid()
{
    qDebug()<<"::~selectforid";

    delete ui;
}


void selectforid::fanhui()
{
    this->parentWidget()->show();
    this->close();
}


void selectforid::bt_enable()
{
    t_select->stop();
    ui->bt_selectdate->setEnabled(true);
       ui->l_tip->setText(" ");
}

void selectforid::on_bt_selectdate_clicked()
{
    QString date = QString("date='%1-%2-%3'").arg(ui->cbb_year->currentText()).arg(ui->cbb_month->currentText()).arg(ui->cbb_day->currentText());
    QString department = QString("department='%1'").arg( ui->cbb_depart->currentText());
    QString both = QString("%1 and %2").arg(date).arg(department);

    t_select->start(1000);
    ui->bt_selectdate->setEnabled(false);

    if(ui->cb_date->checkState() == Qt::Checked && ui->cb_depart->checkState() == Qt::Checked){
        model->setFilter(both);
    }
    else if(ui->cb_date->checkState() == Qt::Checked){
        model->setFilter(date);
    }
    else if(ui->cb_depart->checkState() == Qt::Checked){
         model->setFilter(department);
    }
    else{
        model->setFilter(NULL);
    }
    model->select();
    qDebug()<<date<<"::"<<department;
    ui->l_tip->setText("正在查询，请稍后.....");
}

//选中checked为true；
void selectforid::on_cb_am_clicked(bool checked)
{
    ui->table_record->setColumnHidden(4,!checked);
    ui->table_record->setColumnHidden(5,!checked);

}

void selectforid::on_cb_pm_clicked(bool checked)
{
    ui->table_record->setColumnHidden(6,!checked);
    ui->table_record->setColumnHidden(7,!checked);
}

void selectforid::on_cb_nm_clicked(bool checked)
{
    ui->table_record->setColumnHidden(8,!checked);
    ui->table_record->setColumnHidden(9,!checked);
}
