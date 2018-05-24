#include "windowshezhi.h"
#include "ui_windowshezhi.h"
#include <QMessageBox>

windowshezhi::windowshezhi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowshezhi)
{
    ui->setupUi(this);
    setStyleSheet("windowshezhi{background-color:rgb(124 ,184 ,254)}");//设置背景颜色
    //页面布局的设置
    ui->wg_top->setDir("系统设置");
    connect(ui->wg_top,SIGNAL(bt_click()),this,SLOT(fanhui()));

    w = NULL;
    log = NULL;

    net = netmodel::get_net();
    connect(net, SIGNAL(time_sig(QString)), this, SLOT(update_time(QString)));

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(update_out()));
    sql = sqlmodel::get_model();
}

windowshezhi::~windowshezhi()
{
    delete ui;
    delete timer;
}

void windowshezhi::fanhui()
{
    delete w;
    w = NULL;

    delete log;
    log = NULL;

    this->parentWidget()->show();
    this->close();
}

void windowshezhi::set_Enabled(bool b)
{
    ui->pushButton->setEnabled(b);
    ui->pushButton_2->setEnabled(b);
    ui->pushButton_3->setEnabled(b);
    ui->bt_reset->setEnabled(b);

}

void windowshezhi::on_pushButton_2_clicked()
{
    if(NULL == w)
        w= new netwindow(this);//把主界面指针传给灯光控制界面，（返回处理， 使用主界面数据）
    w->show();
    this->hide();
}

void windowshezhi::on_pushButton_clicked()
{
    if(net->get_flag() == 0){
        QMessageBox::warning(this, "Tip", "更新失败，检查是否连接服务器。");
        return;
    }
    net->send_data("time");
    set_Enabled(false);
    timer->start(5000);
}

void windowshezhi::on_bt_reset_clicked()
{
    if (QMessageBox::Yes == QMessageBox::question(this,
                                                  tr("Question"),
                                                  tr("确认重置系统吗?"),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes)) {

        set_Enabled(false);

        /*
        if(sql->config_reset()){
            ui->l_tips->setText("重置系统成功！");
        }else{
            ui->l_tips->setText("重置失败！");
        }
        */
    }
    set_Enabled(true);
}

void windowshezhi::update_out()
{
    timer->stop();
    QMessageBox::warning(this, "Tip", "更新失败,请稍后重试。");
    set_Enabled(true);
}

void windowshezhi::update_time(QString json)
{
    QStringList list = json.split("##");
    QString dd = list[0];
    QString tt = list[1];

    QString d =QString("date -s %1").arg(dd);
    QString t = QString("date -s %1").arg(tt);
    system(d.toLatin1().data());
    system(t.toLatin1().data());
    net->send_data("time#ok");
    set_Enabled(true);
    timer->stop();
}



void windowshezhi::on_pushButton_3_clicked()
{
    if(NULL == log)
        log = new windowlog(this);
    log->show();
    this->hide();
}
