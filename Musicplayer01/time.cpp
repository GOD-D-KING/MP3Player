#include "time.h"
#include <thread>
#include <iostream>
using namespace std;
void time::timer()
{
    for(int i=1; i<233; i++)
    {   int x=1000;
        std::this_thread::sleep_for(std::chrono::milliseconds(x));
        cout<<i<<endl;

    //getchar();
    }

}

