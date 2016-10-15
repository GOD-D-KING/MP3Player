#include "ui.h"
#include "Windows.h"
#include <iostream>
using namespace std;
void ui::menu()
{
     const char buffer[MENU] = "OPEN               PLAY               STOP               EXIT";//設定OPEN  選單樣式
    HANDLE hin;
    DWORD WriteWord;
    COORD pos;//位置
    hin = GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X = 27, pos.Y = 689; //
    SetConsoleCursorPosition(hin, pos);
    if(!WriteConsole(hin, buffer, sizeof(buffer), &WriteWord, NULL));//寫出選單
    getchar();

}

