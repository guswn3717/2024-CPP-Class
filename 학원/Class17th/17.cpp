#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

#pragma region rand() 함수

	/*time(null) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터
	경과된 시간을 초*(SEC)단위로 반환하는 함수입니다.*/

	//srand(time(NULL));	 /*난수 발생기를 초기화하는 함수입니다*/
	//
	//int result = rand();	/*0~32767 사이의 */
	//
	//printf("(%d)result 변수의 값 : %d\n", i, result % 10+1);

#pragma endregion

#pragma region UP - DOWN GAME

	srand(time(NULL));	 

	int game = rand();	

	game = game % 30;

	int a = 0;
	int chances = 5;

	printf("1부터 30 사이의 숫자를 고르시오\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 시도 : ♥ X %d\n", i+1, 5-i);
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