#include <stdio.h>

typedef struct Vector2
{
	int x;
	int y;
}Vector2;

typedef struct Vector3
{
	int x;
	int y;
	int z;
}Vector3;

enum STATUS
{
	/*열거형 중간에 값을 변경하게 되면 그 다음의 값도
	 이전의 값에 영향을 받은 상태로 증가하게 됩니다*/

	IDLE,
	ATTACK = 10, 
	DIE

	/*열거형은 0부터 시작하며, 1씩 증가합니다*/
};

int Fac(int n)
{
	if (n == 1)
		return 1;

	int a = 1;

	for (int i = 2; i <= n; i++) 
		a *= i;

	return a;
}

int main()
{

#pragma region typedef

	//Vector2 vectror2;
	//
	//vectror2.x = 10;
	//vectror2.y = 20;
	//
	//printf("Vector2 x : %d\n", vectror2.x);
	//printf("Vector2 y : %d\n", vectror2.y);
	//puts("");
	//
	//Vector3 vectror3 = { 5, 10, 15 };
	//
	//printf("Vector3 x : %d\n", vectror3.x);
	//printf("Vector3 y : %d\n", vectror3.y);
	//printf("Vector3 z : %d\n", vectror3.z);

#pragma endregion

#pragma region 열거형

	//enum STATUS	status = IDLE;
	//
	//printf("status의 값 : %d\n", status);
	//
	//switch (status)
	//{
	//case IDLE: printf("대기 상태\n");
	//	break;
	//case ATTACK: printf("공격 상태\n");
	//	break;
	//case DIE: printf("죽은 상태\n");
	//	break;
	//}

#pragma endregion

#pragma region 팩토리얼!

	//int b = 4;
	
	//printf("%d! = %d\n", b, Fac(b));

#pragma endregion

#pragma region 이중 포인터

	//int data = 10;
	//
	//int* ptr = &data;
	//
	//int** ptr1 = &ptr;
	//
	//printf("data변수의 값 : %d\n", data);
	//
	//*ptr = 20;
	//
	//printf("data변수의 값 : %d\n", data);
	//
	//**ptr1 = 30;
	//
	//printf("data변수의 값 : %d\n", data);

#pragma endregion

#pragma region 이차원 배열
	/*배열의 요소로 또 다른 배열을 가지는 배열입니다*/

	int array2D[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			printf("array2D[%d][%d]의 값 : %d\n", i, j, array2D[i][j]);

	/*2차원 배열은 행과 열고 구분되며, 앞에 있는 배열은
	행을 의미하고, 뒤에있는 배열은 열을 의미합니다*/
#pragma endregion


	return 0;
}