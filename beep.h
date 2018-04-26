#ifndef BEEP_H
#define BEEP_H


class Beep
{
public:
    static Beep* get_beep();
    ~Beep();
    void start_Beep();
    void close_Beep();

private:
    Beep();
    Beep(Beep &b){}
    static Beep* bp;
    int fd;
};

#endif // BEEP_H
