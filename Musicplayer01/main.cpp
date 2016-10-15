#include <iostream>
#include "bass.h"
#include "musicplayer.h"
#include "ui.h"
#include "time.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ui objectmenu;
    objectmenu.menu();
    musicplayer objectopen;
    objectopen.open();


    return 0;
}
