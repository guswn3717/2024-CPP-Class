#define WIDTH 11
#define HEIGHT 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character.h"


char maze[WIDTH][HEIGHT];

void Init()
{
    strcpy(maze[0], "00000000000");
    strcpy(maze[1], "01010101010");
    strcpy(maze[2], "01010101010");
    strcpy(maze[3], "11010101010");
    strcpy(maze[4], "00010101010");
    strcpy(maze[5], "01111111110");
    strcpy(maze[6], "00000000010");
    strcpy(maze[7], "11111111010");
    strcpy(maze[8], "00010001010");
    strcpy(maze[9], "01000101010");
    strcpy(maze[10], "21111100010");
}

void Renderer()
{
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (maze[i][j] == '1')
                printf("бс");
            else if (maze[i][j] == '0')
                printf("бр");
            else if (maze[i][j] == '2')
                printf("б▌");
        }
        printf("\n");
    }
}

int main()
{

#pragma region 
	
    Character character = { 4, 1, "б┌" };

    Init();

    while (1)
    {
        Renderer();

        GotoXY(character.x, character.y);
        printf("%s", character.shape);
    
        system("cls");
    }

#pragma endregion



	return 0;
}