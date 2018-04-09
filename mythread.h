#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <serialmodel_c.h>
#include <QThread>

/*
 *设计成单例模式；
 *
 * */
class myThread:public QThread
{
    Q_OBJECT

public:
    static myThread* get_thread();
    ~myThread();
    virtual void run();

signals:
    void send_rfid(int rfid);

private:
    explicit myThread(QObject *parent = 0);
    myThread(myThread& t){}
    static myThread *mythread;
    serialmodel_C *sc;

};

#endif // MYTHREAD_H
