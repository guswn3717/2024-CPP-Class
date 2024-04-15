#pragma once
#include <Windows.h>

struct Character
{
    int x, y;
    const char* shape;
};

void GotoXY(int x, int y)
{
    COORD position = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}