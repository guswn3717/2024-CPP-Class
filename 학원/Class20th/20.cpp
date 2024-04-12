#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define W 72
#define S 80
#define A 75
#define D 77
#define F -32

void GotoXY(int x, int y)
{
    /*x축과 y축 좌표 설정*/
    COORD position = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
    /*GetStdHandle(STD_OUTPUT_HANDLE) : 표준 출력 핸들을 가져옵니다
    SetConsoleCursorPosition : 콘솔창의 커서를 이동합니다*/
}

int main()
{
    //char key = 0;
    //int x = 0;
    //int y = 0;
    //
    //while (1)
    //{
    //    if (_kbhit())
    //    {
    //        key = _getch(); //키보드의 입력을 받습니다
    //        system("cls");
    //
    //        switch (key)
    //        {
    //        case F:
    //            break;
    //        case W:
    //            if (y > 0)
    //                y--;
    //            break;
    //        case S:
    //            if (y < 24) 
    //                y++;
    //            break;
    //        case A:
    //            if (x > 0)
    //                x--;
    //            break;
    //        case D:
    //            if (x < 79) 
    //                x++;
    //            break;
    //        }
    //
    //        GotoXY(x, y);
    //        printf("★");
    //    }
    //}

    return 0;
}