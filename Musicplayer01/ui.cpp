#include "ui.h"
#include "Windows.h"
#include <iostream>
using namespace std;
void ui::menu()
{
     const char buffer[MENU] = "OPEN               PLAY               STOP               EXIT";//�]�wOPEN  ���˦�
    HANDLE hin;
    DWORD WriteWord;
    COORD pos;//��m
    hin = GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X = 27, pos.Y = 689; //
    SetConsoleCursorPosition(hin, pos);
    if(!WriteConsole(hin, buffer, sizeof(buffer), &WriteWord, NULL));//�g�X���
    getchar();

}

