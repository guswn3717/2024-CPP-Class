#include <stdio.h>

int level = 1;

int itemCode;

void Score()
{
	/*���� ������ �� �� ���� �ʱ�ȭ��
	�̷������ ���� �Դϴ�*/
	static int score = 0;

	score++;

	printf("score������ ���� : %d\n", score);
}

void Stage()
{
	level += 1;
}

int main()
{

#pragma region ���� ����
	/*�Լ� ���ο��� ����� ������ {} �������� 
	���� �� �� ������, �Լ��� ����Ǹ� �޸𸮿���
	������� Ư¡�� ������ �ֽ��ϴ�*/

	//int data = 100;
	//
	//{
	//	int data = 200;
	//
	//	/*���� ����� ��ġ�� �ִ� data ������ �����մϴ�*/
	//	printf("data ������ �� : %d\n", data);
	//}

	//printf("data ������ �� : %d\n", data);

#pragma endregion

#pragma region ���� ����
	/*�Լ� �ܺο� ����� ������, ��𿡼����� ������
	�����ϸ�, ���α׷��� ����� �� �����ǰ�, ���α׷���
	����� �� �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�*/

	//Stage();
	//
	//printf("level %d\n", level);
	//printf("item %d\n", itemCode);
	
#pragma endregion

#pragma region ���� ����
	/*static �̶�� Ű���带 ����ϰ� ���� ������ Ư����
	�����鼭, ���� ������ Ư¡�� ������ �ִ� ���� �Դϴ�*/
	
	//printf("%d", Score);

#pragma endregion

#pragma region ���μ� ����
	int a = 0;                       //a���� ����
									 //
	printf("�� �Է� : ");            //"�� �Է� : "�� ���
	scanf_s("%d", &a);               //int�� ���� a�� ���ο� ���� ����
									 //
	for (int i = 2; i <= a; i++)	 //i = 2 ���� ����, a�� i ���� ũ�ų� ���� ����������, i+1 �ݺ�
		if (a % i == 0)				 //���� a / i�� �������� 0�̶��
		{							 //{
			printf("%d\t", i);		 //i�� ���
			a = a / i;				 //a = a/i ����
			i--;					 //i--
		}							 //}
	


	

#pragma endregion


	return 0;
}