#include <stdio.h>

int main()
{

#pragma region �ּ� ������
	/*������ �ּҰ��� ��ȯ�ϴ� ������ �Դϴ�*/

	//int data = 10;
	                           //%p : ������ �ּҸ� ����ϴ� ������
	//printf("data ������ �ּ� : %p", &data); 

	/*---------------------------
	�Ź� �ּҰ��� �ٲ� ���´�
	----------------------------*/

	/*�������� �ּҰ��� �ش� �����Ͱ� ����� �޸���
	���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1 byte
	�� ũ��� ������ ǥ���մϴ�*/
#pragma endregion

#pragma region sizeof() ������
	/*������ �޸� ũ�⸦ ��ȯ�ϴ� ������ �Դϴ�*/
	/*
	float health = 100.0f;

	printf("int ������ �޸� ũ�� : %u\n", sizeof(int));
	printf("float ������ �޸� ũ�� : %u\n", sizeof(health));
	*/
#pragma endregion

#pragma region ������
	/*�޸��� �ּҰ��� ������ �� �ִ� �����Դϴ�*/
//	int value = 100;
//	int* ptr = NULL;
//
//	ptr = &value;
//
//	printf("ptr�� �� : %p\n", ptr);
//	printf("ptr�� �޸� �ּ� : %p\n", &ptr);
//	printf("value�� �� : %p\n", &value);

	/*������ ������ �ڽ��� �޸� ������ ������ ������,
	������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش�
	������ ���� �ּҸ� ����Ű�� �˴ϴ�*/
	/*
	int attack = 50;

	int* iptr = &attack;

	printf("attack�� �� : %d\n", attack);

	*iptr = 99;

	printf("attack�� �� : %d\n", attack);
	*/
	/*������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
	�����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� ��
	�����Ƿ� �����Ͱ� ����Ű�� �޸��� �ڷ�����
	�������־�� �մϴ�*/
	/*
	float damage = 7.5f;

	int* ptr1 = &damage;

	printf("ptr1 ������ ����Ű�� �� : %d\n", *ptr1);
	*/
	/*������ ������ �����ϱ� ���� �ּ� ���� ������ ������
	�ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�*/
	/*
	float* fptr = NULL;

	printf("fptr ������ ������ �޸� ũ�� : %d\n", sizeof(fptr));
	*/
	/*������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó��
	�� �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ�
	ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�*/

	//float* fptr = NULL;
	//
	//float x = 0.0f;
	//float y = 0.0f;
	//
	//fptr = &x;
	//*fptr = 66.75f;
	//
	//printf("fptr_x�� �� : %f\n", x);
	//
	//fptr = &y;
	//*fptr = 99.825f;
	//
	//printf("fptr_y�� �� : %f\n", y);

#pragma endregion

#pragma region ��� ���� ������
	/*������ ������ ����� �����Ͽ�, ������ ������
	����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ ��
	������ ������ �� �ֽ��ϴ�*/
	/*
	int a = 10;
	int b = 20;

	const int* cptr = NULL;

	cptr = &a;

	printf("cptr�� �� : %p\n", cptr);
	*/
	/*cptr = 99;   (error)
	
	����� ������ �����ʹ� �ش� ������ ���� ������ �� 
	������, �ٸ� ������ �ּҴ� ����ų �� �ֽ��ϴ�.*/

	/*
	cptr = &b;
	printf("cptr�� �� : %p\n", cptr);
	*/

#pragma endregion



	return 0;
}