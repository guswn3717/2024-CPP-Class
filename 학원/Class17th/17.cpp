#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

#pragma region rand() �Լ�

	/*time(null) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ���
	����� �ð��� ��*(SEC)������ ��ȯ�ϴ� �Լ��Դϴ�.*/

	//srand(time(NULL));	 /*���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ��Դϴ�*/
	//
	//int result = rand();	/*0~32767 ������ */
	//
	//printf("(%d)result ������ �� : %d\n", i, result % 10+1);

#pragma endregion

#pragma region UP - DOWN GAME

	srand(time(NULL));	 

	int game = rand();	

	game = game % 30;

	int a = 0;
	int chances = 5;

	printf("1���� 30 ������ ���ڸ� ���ÿ�\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �õ� : �� X %d\n", i+1, 5-i);
		scanf_s("%d", &a);
		
		chances--;

		puts("");

		system("cls");

		if (4-i == 0)
			printf("GAME OVER");
		else if (game > a)
			printf("^^^\n");
		else if (game < a)
			printf("vvv\n");
		else if (game == a)
		{
			printf("Clear!");
			break;
		}
	}
	
#pragma endregion

	return 0;
}