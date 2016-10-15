#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H
#include "bass.h"


class musicplayer
{
    public:
       void open();
       void play();
    private:
       HSTREAM streamHandle;
};


#endif // MUSICPLAYER_H
