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
	/*������ �߰��� ���� �����ϰ� �Ǹ� �� ������ ����
	 ������ ���� ������ ���� ���·� �����ϰ� �˴ϴ�*/

	IDLE,
	ATTACK = 10, 
	DIE

	/*�������� 0���� �����ϸ�, 1�� �����մϴ�*/
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

#pragma region ������

	//enum STATUS	status = IDLE;
	//
	//printf("status�� �� : %d\n", status);
	//
	//switch (status)
	//{
	//case IDLE: printf("��� ����\n");
	//	break;
	//case ATTACK: printf("���� ����\n");
	//	break;
	//case DIE: printf("���� ����\n");
	//	break;
	//}

#pragma endregion

#pragma region ���丮��!

	//int b = 4;
	
	//printf("%d! = %d\n", b, Fac(b));

#pragma endregion

#pragma region ���� ������

	//int data = 10;
	//
	//int* ptr = &data;
	//
	//int** ptr1 = &ptr;
	//
	//printf("data������ �� : %d\n", data);
	//
	//*ptr = 20;
	//
	//printf("data������ �� : %d\n", data);
	//
	//**ptr1 = 30;
	//
	//printf("data������ �� : %d\n", data);

#pragma endregion

#pragma region ������ �迭
	/*�迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�*/

	int array2D[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			printf("array2D[%d][%d]�� �� : %d\n", i, j, array2D[i][j]);

	/*2���� �迭�� ��� ���� ���еǸ�, �տ� �ִ� �迭��
	���� �ǹ��ϰ�, �ڿ��ִ� �迭�� ���� �ǹ��մϴ�*/
#pragma endregion


	return 0;
}