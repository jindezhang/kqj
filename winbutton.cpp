#include "winbutton.h"
#include "ui_winbutton.h"

winButton::winButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::winButton)
{
    ui->setupUi(this);
}

winButton::~winButton()
{
    delete ui;
}


void winButton::on_bt_del_clicked()
{
    emit click_del();
}
