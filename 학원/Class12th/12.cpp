#include <stdio.h>

int level = 1;

int itemCode;

void Score()
{
	/*정적 변수는 단 한 번만 초기화가
	이루어지는 변수 입니다*/
	static int score = 0;

	score++;

	printf("score변수의 값은 : %d\n", score);
}

void Stage()
{
	level += 1;
}

int main()
{

#pragma region 지역 변수
	/*함수 내부에서 선언된 변수로 {} 내에서만 
	접근 할 수 있으며, 함수가 종료되면 메모리에서
	사라지는 특징을 가지고 있습니다*/

	//int data = 100;
	//
	//{
	//	int data = 200;
	//
	//	/*가장 가까운 위치에 있는 data 변수에 접근합니다*/
	//	printf("data 변수의 값 : %d\n", data);
	//}

	//printf("data 변수의 값 : %d\n", data);

#pragma endregion

#pragma region 전역 변수
	/*함수 외부에 선언된 변수로, 어디에서든지 접근이
	가능하며, 프로그램이 실행될 때 생성되고, 프로그램이
	종료될 때 메모리에서 해제되는 특징을 가지고 있는 변수입니다*/

	//Stage();
	//
	//printf("level %d\n", level);
	//printf("item %d\n", itemCode);
	
#pragma endregion

#pragma region 정적 변수
	/*static 이라는 키워드를 사용하고 지역 변수의 특정을
	가지면서, 전역 변수의 특징을 가지고 있는 변수 입니다*/
	
	//printf("%d", Score);

#pragma endregion

#pragma region 소인수 분해
	int a = 0;                       //a변수 생성
									 //
	printf("수 입력 : ");            //"수 입력 : "을 출력
	scanf_s("%d", &a);               //int형 변수 a에 새로운 값을 저장
									 //
	for (int i = 2; i <= a; i++)	 //i = 2 변수 생성, a가 i 보다 크거나 같지 않을때까지, i+1 반복
		if (a % i == 0)				 //만약 a / i의 나머지가 0이라면
		{							 //{
			printf("%d\t", i);		 //i를 출력
			a = a / i;				 //a = a/i 대입
			i--;					 //i--
		}							 //}
	


	

#pragma endregion


	return 0;
}