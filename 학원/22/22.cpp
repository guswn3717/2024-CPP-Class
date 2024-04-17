#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int width = 100;
int height = 30;

HANDLE screen[2];

int screenIndex = 0;

int X = 5;
int Y = 5;

void GotoXY(int x, int y)
{
    COORD position = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void InitializeScreen()
{
    CONSOLE_CURSOR_INFO cursor;

    COORD size = { width, height };

    SMALL_RECT rect = { 0,0, width - 1, height - 1 };

    screen[1] = CreateConsoleScreenBuffer
    (
        GENERIC_READ | GENERIC_WRITE,
        0,
        NULL,
        CONSOLE_TEXTMODE_BUFFER,
        NULL
    );

    SetConsoleScreenBufferSize(screen[1], size);

    SetConsoleWindowInfo(screen[1], TRUE, &rect);

    cursor.bVisible = FALSE;

    SetConsoleCursorInfo(screen[0], &cursor);
    SetConsoleCursorInfo(screen[1], &cursor);
}

void FlipScreen()
{
    SetConsoleActiveScreenBuffer(screen[screenIndex]);

    screenIndex = !screenIndex;
}

void ClearScreen()
{
    COORD position = { 0,0 };

    DWORD written;

    FillConsoleOutputCharacter
    (
        screen[screenIndex],
        ' ',
        width * height,
        position,
        &written
    );
}

void ReleaseScreen()
{
    CloseHandle(screen[0]);
    CloseHandle(screen[1]);
}

void DrawScreen(int x, int y, const char* string)
{
    COORD position = { x, y };
    DWORD written;

    SetConsoleCursorPosition
    (
        screen[screenIndex],
        position
    );

    WriteFile
    (
        screen[screenIndex],
        string,
        strlen(string),
        &written,
        NULL
    );

}

int main()
{
    srand((unsigned int)time(NULL));

    InitializeScreen();

    while (1)
    {
        int direction = rand() % 4 + 1;

        switch (direction)
        {
        case 1:
            X += 5;
            break;
        case 2:
            X -= 5;
            break;
        case 3:
            Y += 5;
            break;
        case 4:
            Y -= 5;
            break;
        }

        if (X >= width)
            X = 0;
        else if (X < 0)
            X = width - 1;

        if (Y >= height)
            Y = 0;
        else if (Y < 0)
            Y = height - 1;

        ClearScreen();

        DrawScreen(X, Y, "¡Ù");

        FlipScreen();

        Sleep(100);
    }

    ReleaseScreen();

    return 0;
}
