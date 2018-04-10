#include "mythread.h"

/*
myThread* myThread::mythread = NULL;

myThread *myThread::get_thread()
{
    if(NULL == mythread){
        mythread = new myThread();

    }
    return mythread;
}

myThread::~myThread()
{
    delete sc;
}

void myThread::run()
{
    int rfid;
    int fd = sc->init_R1();
    while(1){
        rfid = sc->get_RFID(fd);
        if(0 == rfid)
            continue;
        emit send_rfid(rfid);
        sleep(1);
    }
}

myThread::myThread(QObject *parent)
{
    //    C转c++的rfid读卡程序
    sc = serialmodel_C::get_model();
}
*/
