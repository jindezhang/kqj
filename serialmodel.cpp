#include "serialmodel.h"
#include <sys/types.h>


SerialModel::SerialModel(QObject *parent) : QObject(parent)
{
    mSerial = new QSerialPort(DEV_PATH1);

    if( !mSerial->open(QIODevice::ReadWrite))
    {
        qDebug()<<"serial open error:"<<DEV_PATH1;
    }

    mSerial->setBaudRate(QSerialPort::Baud9600);
    mSerial->setDataBits(QSerialPort::Data8);
    mSerial->setStopBits(QSerialPort::OneStop);
    connect(mSerial,SIGNAL(readyRead()),this,SLOT(read_data()));
}

SerialModel::~SerialModel()
{
    delete mSerial;

}

void SerialModel::rfid_write(int i)
{
    qDebug()<<"rfid_write";

    unsigned char WBuf[8];
    if(1 == i){
        //bzero(WBuf, 8);
        WBuf[0] = 0x07;	//帧长= 7 Byte
        WBuf[1] = 0x02;	//包号= 0 , 命令类型= 0x01
        WBuf[2] = 'A';	//命令= 'A'，检测卡片
        WBuf[3] = 0x01;	//信息长度 = 1
        WBuf[4] = 0x52;	//请求模式:  ALL=0x52
        WBuf[5] =CalBCC(WBuf, WBuf[0]-2); //校验和
        WBuf[6] = 0x03; //结束标志
        mSerial->write((char *)WBuf,7);
    }
    else {
        //bzero(WBuf, 8);
        WBuf[0] = 0x08;	//帧长= 8 Byte
        WBuf[1] = 0x02;	//包号= 0 , 命令类型= 0x01
        WBuf[2] = 'B';	//命令= 'B'
        WBuf[3] = 0x02;	//信息长度= 2
        WBuf[4] = 0x93;	//防碰撞0x93: 一级防碰撞
        WBuf[5] = 0x00;	//位计数0
        WBuf[6] = CalBCC(WBuf, WBuf[0]-2); //校验和
        WBuf[7] = 0x03;	//结束标志
        mSerial->write((char *)WBuf,8);
    }
}

void SerialModel::read_data()
{
    qDebug()<<"read_data";
    QByteArray data = mSerial->readAll();

    emit rfid_data(data);
}
//校验位和
unsigned char SerialModel::CalBCC(unsigned char *buf, int n)
{
    qDebug()<<"CalBCC";
    int i;
    unsigned char bcc=0;
    for(i = 0; i < n; i++)
    {
        bcc ^= *(buf+i);
    }
    return (~bcc);
}

