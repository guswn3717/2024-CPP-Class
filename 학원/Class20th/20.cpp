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
    /*x��� y�� ��ǥ ����*/
    COORD position = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
    /*GetStdHandle(STD_OUTPUT_HANDLE) : ǥ�� ��� �ڵ��� �����ɴϴ�
    SetConsoleCursorPosition : �ܼ�â�� Ŀ���� �̵��մϴ�*/
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
    //        key = _getch(); //Ű������ �Է��� �޽��ϴ�
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
    //        printf("��");
    //    }
    //}

    return 0;
}