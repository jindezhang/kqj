#ifndef BEEP_H
#define BEEP_H


class Beep
{
public:
    static Beep* get_beep();//采用单例模式
    ~Beep();
    //打开蜂鸣器
    void start_Beep();
  //关闭蜂鸣器。
    void close_Beep();

private:
    Beep();
    Beep(Beep &b){}
    static Beep* bp;
    int fd;
};

#endif // BEEP_H
