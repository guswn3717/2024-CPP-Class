#include <stdio.h>

int main()
{

#pragma region ���ǹ�
	/*� ������ �־��� �� �ش� ���ǿ� ����
	������ �����ϵ��� �����ϴ� ��ɹ� �Դϴ�*/

#pragma region ���迬����
	//�� ���� �ǿ������� ���� ���Ͽ� �� �����
	//0 �Ǵ� 1�̶�� ������ ��Ÿ���� ������ �Դϴ�

	int result = 0;

	result = 10 > 5;

	printf("result ������ �� : %d\n", result);

	result = 5 < 4;

	printf("result ������ �� : %d\n", result);

	result = 5 >= 1;

	printf("result ������ �� : %d\n", result);

	result = 3 <= 1;

	printf("result ������ �� : %d\n", result);

	result = 10 == 10;

	printf("result ������ �� : %d\n", result);

	result = 10 != 10;

	printf("result ������ �� : %d\n", result);

	/*���� �����ڴ� ������ ���� �� 1�̶�� ������
	��ȯ�ϸ� ������ Ʋ���� 0�̶�� ���·� ��ȯ�մϴ�*/

#pragma endregion
	
#pragma region if ��
	/*� Ư���� ������ ���Ͽ� ������ �´ٸ�
	����Ǵ� ��ɹ��Դϴ�*/

	int count = 5;

	if (count == 5)
		printf("if ���� ������ '��'�Դϴ�\n");

	/*if���� ������ 1�϶� ����Ǹ�, 0�� �� ������� �ʽ��ϴ�*/

#pragma endregion

#pragma region else if��
	/*if���� ������ Ʋ�� �� else if���� ������
	�´ٸ� ����Ǵ� ��ɹ� �Դϴ�*/

	int level = 99;

	if (level == 81)
		printf("1�� ���� \n");
	else if (level <= 99)
		printf("2�� ����\n");

#pragma endregion

#pragma region else��
	/*if���� else if ���� ������ �� Ʋ����
	����Ǵ� ��ɹ� �Դϴ�*/

	int health = 100;

	if (health <= 0)
		printf("Error 404\n");
	else if (health == 50)
		printf("Error 404\n");
	else
		printf("Game Object\n");

	/*if���� ����� ��� ���ǹ��� ������ ���ٸ�
	���� ���� �ִ� ���ǹ��� ����˴ϴ�*/
#pragma endregion

#pragma region switch ��(�ּ�)
	//� ����� ���� �� ������� ����Ǵ� ��ɹ� �Դϴ�

	/*
	int a = 0;

	printf("1���� 4���� ����");
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("Ÿ��Ʋ\n");
	case 2:
		printf("����\n");
	case 3:
		printf("����\n");
	case 4:
		printf("������\n");		
	default:
		printf("�߸��� �Է��Դϴ�.\n");
	 }
	*/

	/*switch���� ��� ���ǿ� �ش��ϴ� ���� ����
	������ ��ġ�� �̵��մϴ�*/

	/*switch���� �ش� ������ �Ϸ�Ǿ�����, break
	���� ������ ������ �ؿ��ִ� case �� ���� ���
	�����Ű�ٰ� �����մϴ�*/

#pragma endregion

#pragma region break�� (�ּ�)
	/*Ư���� �������� �б⸦ Ż���ϴ� ��� �Դϴ�*/

	/*
	printf("1���� 4���� ����");
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("�̽��� ���ٽ�ƽ\n");
		break;
	case 2:
		printf("���̵�� ���Ϸ�\n");
		break;
	case 3:
		printf("��������\n");
		break;
	case 4:
		printf("���̾Ƹ��\n");
		break;
	default:
		printf("�̽��� ���ٽ�ƽ�� ���� ����� ������ ������ ��ġ�� ��߳� ���� ���ҽ��ϴ� �����ϸ� ��ʽÿ�\n");
		break;
	}
	*/

	/*switch ������ ���ǽ����� �Ǽ��� ������ �Ǽ��� �����
	����� �� �����ϴ�*/

#pragma endregion

#pragma region �� ������

	//AND �� ������

	
	int flag = 0;
	int damage = 10;
	char blood = 'o';

	if (damage == 10 && blood == 'o')
		printf("AND��������\n");

	if (damage == 10 || blood == 'B')
		printf("OR�� ������\n");

	if (!flag)
		printf("NOT �� ������\n");
	
#pragma endregion

#pragma endregion

#pragma region ��и�

	


#pragma endregion


	return 0;
}