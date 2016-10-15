#include "musicplayer.h"
#include "bass.h"
#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include "time.h"
using namespace std;
void musicplayer::open()
{
    OPENFILENAME MUSIC;
    char szFile[300];
    ZeroMemory(&MUSIC, sizeof(MUSIC));
    MUSIC.lStructSize = sizeof(MUSIC);
    MUSIC.hwndOwner = NULL;
    MUSIC.lpstrFile = szFile;
    MUSIC.nMaxFile = sizeof(szFile);
    MUSIC.lpstrFilter = "All\0*.*\0Text\0*.mp3\0";
    MUSIC.nFilterIndex = 1;
    MUSIC.lpstrFileTitle = NULL;
    MUSIC.nMaxFileTitle = 0;
    MUSIC.lpstrInitialDir = NULL;
    MUSIC.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;


    GetOpenFileName(&MUSIC);
    cout<<szFile<<endl;
    string ofn = MUSIC.lpstrFile;//文件名轉字串
    const char* soundName = ofn.c_str();//轉字元
    int device = -1;
    int freq = 44100;
    //HSTREAM streamHandle;
    BASS_Init(device, freq, 0, 0, NULL);

    streamHandle = BASS_StreamCreateFile(FALSE, soundName, 0, 0, 0);

    play();
    for(int i=0; i<233; i++)
    {
        int x=1000;
        std::this_thread::sleep_for(std::chrono::milliseconds(x));
        cout<<i/60<<":"<<i%60<<endl;

    //getchar();
    }


    getchar();
    BASS_Free();
}
void musicplayer::play()
{
    BASS_ChannelPlay(streamHandle, FALSE);
    //getchar();
}







