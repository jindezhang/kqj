#include "serialmodel_c.h"

serialmodel_C* serialmodel_C::model = NULL;
serialmodel_C::serialmodel_C()
{

}

serialmodel_C *serialmodel_C::get_model()
{
    if(NULL == model ){
        model = new serialmodel_C();
    }
    return model;
}

serialmodel_C::~serialmodel_C()
{
    close_RFID(fd);
}

void serialmodel_C::init_tty(int fd)
{
    //声明设置串口的结构体
    struct termios termios_new;
    //先清空该结构体
    bzero( &termios_new, sizeof(termios_new));

    cfmakeraw(&termios_new);

    //设置波特率
    cfsetispeed(&termios_new, B9600);
    cfsetospeed(&termios_new, B9600);

    // CLOCAL和CREAD分别用于本地连接和接受使能
    // 首先要通过位掩码的方式激活这两个选项。
    termios_new.c_cflag |= CLOCAL | CREAD;

    //通过掩码设置数据位为8位
    termios_new.c_cflag &= ~CSIZE;
    termios_new.c_cflag |= CS8;

    //设置无奇偶校验
    termios_new.c_cflag &= ~PARENB;

    //一位停止位
    termios_new.c_cflag &= ~CSTOPB;

    // 可设置接收字符和等待时间，无特殊要求可以将其设置为0
    termios_new.c_cc[VTIME] = 0;
    termios_new.c_cc[VMIN] = 1;

    // 用于清空输入/输出缓冲区
    tcflush (fd, TCIFLUSH);

    //完成配置后，可以使用以下函数激活串口设置
    if(tcsetattr(fd, TCSANOW, &termios_new))
        printf("Setting the serial1 failed!\n");

}

unsigned char serialmodel_C::CalBCC(unsigned char *buf, int n)
{
    int i;
    unsigned char bcc=0;
    for(i = 0; i < n; i++)
    {
        bcc ^= *(buf+i);
    }
    return (~bcc);
}

void serialmodel_C::close_RFID(int fd)
{
    close(fd);
}

int serialmodel_C::get_RFID(int fd)
{
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    unsigned char WBuf[7], RBuf[128];

    bzero(WBuf, 7);
    WBuf[0] = 0x07;	//帧长= 7 Byte
    WBuf[1] = 0x02;	//包号= 0 , 命令类型= 0x01
    WBuf[2] = 'A';	//命令= 'A'，检测卡片
    WBuf[3] = 0x01;	//信息长度 = 1
    WBuf[4] = 0x52;	//请求模式:  ALL=0x52
    WBuf[5] = CalBCC(WBuf, WBuf[0]-2); //校验和
    WBuf[6] = 0x03; //结束标志

    //fprintf(stderr, "正在检测卡片");
    int count = 0;
    while(1)
    {
        // 向串口发送指令
        tcflush (fd, TCIFLUSH);
        write(fd, WBuf, 7);

        usleep(10*1000);

        bzero(RBuf, 128);
        read(fd, RBuf, 128);

        //应答帧状态部分为0 则请求成功
        if(RBuf[2] == 0x00)
        {
            printf("\n获取RFID卡信息成功[%d]: ", RBuf[3]);

            int i;
            for(i=0; i<RBuf[3]; i++)
            {
                printf("%c", RBuf[4+i]);
            }
            printf("\n");
            break;
        }
        else
        {

            count++;
            usleep(100*1000);
        }
    }

    // =======================================

    bzero(WBuf, 8);
    WBuf[0] = 0x08;	//帧长= 8 Byte
    WBuf[1] = 0x02;	//包号= 0 , 命令类型= 0x01
    WBuf[2] = 'B';	//命令= 'B'
    WBuf[3] = 0x02;	//信息长度= 2
    WBuf[4] = 0x93;	//防碰撞0x93: 一级防碰撞
    WBuf[5] = 0x00;	//位计数0
    WBuf[6] = CalBCC(WBuf, WBuf[0]-2); //校验和
    WBuf[7] = 0x03;	//结束标志

    // 向串口发送指令
    tcflush (fd, TCIFLUSH);
    write(fd, WBuf, 8);

    usleep(10*1000);

    bzero(RBuf, 128);
    read(fd, RBuf, 128);

    //应答帧状态部分为0 则成功
    int cardid;
    if(RBuf[2] == 0x00)
    {
        int i, j;
        for(i=RBuf[3]-1, j=0; i>=0; i--, j++)
        {
            memcpy((char *)&cardid+j, &RBuf[4+i], 1);
        }
    }
    else
    {
        printf("获取卡号失败.\n");
        return 0;
    }

    printf("卡号: %#x\n", cardid);

    return cardid;
}

int serialmodel_C::init_R1()
{
    // 初始化串口
    fd = open(DEV_PATH1, O_RDWR | O_NOCTTY);
    init_tty(fd);

    return fd;
}

