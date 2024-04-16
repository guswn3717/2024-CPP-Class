#pragma once
#include "Character.h"
#include <conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define WIDTH 11
#define HEIGHT 11

void Input(char maze[WIDTH][HEIGHT], Character* character)
{
    

    if (_kbhit())
    {
        char key = _getch();
        
        if (maze[character->y][character->x / 2] == '2')
        {
            printf("Å»Ãâ!!!");
            exit(0);
        }
    
        switch (key)
        {
        case 32: break;
        case RIGHT:
            if (character->x + 1 >= 0 && character->x + 1 < WIDTH && maze[character->y][character->x + 1] != '1')
                character->x += 1;
            break;
        case DOWN :
            if (character->y + 1 >= 0 && character->y + 1 < HEIGHT && maze[character->y + 1][character->x] != '1')
                character->y += 1;
            break;
        case UP:
            if (character->y - 1 >= 0 && character->y - 1 < HEIGHT && maze[character->y - 1][character->x] != '1')
                character->y -= 1;
            break;
        case LEFT :
            if (character->x - 1 >= 0 && character->x - 1 < WIDTH && maze[character->y][character->x - 1] != '1')
                character->x -= 1;
            break;
    
        }
    }
    
}

