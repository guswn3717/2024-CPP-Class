#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#define SIZE 1000000

void Load(const char* name)
{
	FILE* file = fopen(name, "r");

	int c;
	while ((c = fgetc(file)) != EOF)
		putchar(c);

	fclose(file);
}

int main()
{
#pragma region ���� �����
	
	/*���� ������� ���ؼ��� ������ ���� �ݴ� ������ �ʿ��մϴ�
	������ ���� ���ؼ��� fopen �Լ��� ����մϴ�
	fopen�Լ��� ������ ��ο� ������ ��带 ���ڷ� �޽��ϴ�
	������ ��δ� ������ ��θ� ���ڿ��� �Է��ϸ� �˴ϴ�*/

	/*
	r : �б� ���
	w : ���� ���
	a : �߰� ���
	r+ : �б�/���� ���
	w+ : �б�/���� ���
	a+ : �б�/���� ���v 
	*/

	//FILE* file = fopen("data.txt", "w");
	
	//fputs("Level : 5", file);
	//fputs("Stage : 3", file);
	//fputs("HP : 5", file);
	//
	//fclose(file);

	/*fclose �Լ��� ������ �����͸� ���ڷ� �޽��ϴ�
	������ ������ ������ �����Ͱ� NULL�� �ʱ�ȭ�˴ϴ�
	������ ���� ������ ������ ��� �����ְ� �Ǿ� �����Ͱ� �սǵ� �� �ֽ��ϴ�*/

	//FILE* file = fopen("FD3S.TXT", "r");
	//
	//char buffer[SIZE] = { 0, };
	//
	//fread(buffer, 1, SIZE, file);
	//
	//printf("%s", buffer);
	//
	//fclose(file);

	/*������ ������ �о buffer�� �����մϴ�*/

	/*fread �Լ��� ������ ������, ���� �������� ũ��,
	���� �������� ����, ������ �����͸� ���ڷ� �޽��ϴ�*/


#pragma endregion

#pragma region ASCII Generator
	
	Load("FD3S.TXT");
	
	while (1)
	{
		Load("data.txt");

		system("cls");
	}

#pragma endregion

	
	return 0;
}