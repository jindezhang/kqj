
#ifndef SERIALMODEL_C_H
#define SERIALMODEL_C_H

#define DEV_PATH1   "/dev/ttySAC1"
#define DEV_PATH2   "/dev/ttySAC2"


extern "C"
{
    #include <stdio.h>
    #include <assert.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <termios.h>
    #include <sys/types.h>
    #include <sys/select.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <netdb.h>
    #include <string.h>
    #include <errno.h>
    #include <time.h>
    #include <stdbool.h>
}

static struct timeval timeout;
//单例模式

class serialmodel_C
{
public:
    static serialmodel_C* get_model();
    ~serialmodel_C();
    void init_tty(int fd);
    unsigned char CalBCC(unsigned char *buf, int n);
    void close_RFID(int fd);
    int get_RFID(int fd);
    int init_R1();
private:
    serialmodel_C();
    serialmodel_C(serialmodel_C& s){}
    int fd;
    static serialmodel_C* model;

};

#endif // SERIALMODEL_C_H
