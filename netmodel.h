#ifndef NETMODEL_H
#define NETMODEL_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#include <QMap>
#include <QMessageBox>
#include <QDebug>
#include <sqlmodel.h>
#include <allstruct.h>

/*
 *
 * 该类控制网络连接和管理网络连接
 * 设计成单例模式。
 * */

class netmodel :public QObject
{
    Q_OBJECT
public:

    ~netmodel();
    int get_flag();//获取联网状态。
    static netmodel* get_net();//获取网络单例
    QString get_Ip();//获取使用中的IP
    int get_Port();//获取使用中的port
    void connect_toserver(QString IP, int port);//连接服务器
    void send_data(QString data);//发送数据到服务器
    void ok(QString com);//发送成功应答
    void false_no(QString com);//发送失败应答
signals://该类拥有的信号类型。向其他类发送的信号，类似发送中断
    void sendStatus(QString data);
    void Status_add(QString data);
    void rule_sig(QString data);
    void em_sig(QString data);
    void config_sig(QString data);
    void auth_sig(QString data);
    void ems_sig(QString data);
    void time_sig(QString data);
    void over_sig(QString data);
    void connect_ok();
public slots://槽函数，捕获其他类发送过来的信号，然后进行处理的处理方法。
    void disconnect_from_server();//断开服务器
    void read_data();//读取服务器发送的数据
    void connect_again();//重新链接服务器
    void connect_to_server_suc();//连接服务器


private:
    explicit netmodel(QObject *parent = 0);//构造方法
    netmodel(netmodel& n){}//析构方法
    QTcpSocket *mSocket;//tcp对象
    QString Ip;//连接IP
    int port;//连接端口
    int flag;//联网标志位
    static netmodel *pnet;//单例对象
    QTimer *connectTimer;//网络重连定时器
    sqlmodel *sql;//数据库操作对象
};

#endif // NETMODEL_H
