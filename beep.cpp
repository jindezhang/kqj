#include "beep.h"

extern "C"
{
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>

}

Beep* Beep::bp = NULL;
Beep::Beep()
{
    fd = open("/dev/beep", O_RDWR);
        if(fd < 0)
        {
            perror("open");
        }
}

Beep *Beep::get_beep()
{
    if(NULL == bp){
        bp = new Beep();
    }
    return bp;
}

Beep::~Beep()
{
    close(fd);
}

void Beep::start_Beep()
{
    ioctl(fd, 0, 1);
}

void Beep::close_Beep()
{
    ioctl(fd, 1, 1);
}

