#include <stdio.h>

int main()
{
#pragma region ���ڿ�
	/*�������� �޸� ������ ����� ����
	������ �����Դϴ�*/

	//const char* ptr = "Game";

	//*ptr = 'T';

	// %s ���ڿ��� ����ϴ� ���� ������
	//printf("ptr�� ����Ű�� �� : %s\n", ptr);

	//ptr = "School";

	//printf("ptr�� ����Ű�� �� : %s\n", ptr);

	/*���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ�
	����� ����Ű���� �� �� ������, ���ڿ� �����
	������ ������ �б� ��������� ����Ǳ� ������ 
	���ڿ��� ���� ������ �� �����ϴ�*/

	//char string [] = "Control";

	//printf("string�迭�� ũ�� : %dbyte\n", sizeof(string));



	/*���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�⸦
	�����ϸ�, ������ ���ڿ��� ���� �˷��ִ� ���� ���ڰ�
	�߰��˴ϴ�*/

	//char name[] = "ba\0rd";

	//name [0]

	//name = "Alistar";

	//printf("name �迭�� �� : %s\n", name);

	/*���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� 
	������, ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ��
	���ڱ����� ���ڿ��� ����մϴ�*/

#pragma endregion

#pragma region ���
	//int s = 0;
	//int e = 0;
	//int x = 0;
	//
	//printf("�Է� : ");
	//scanf_s("%d", &s);
	//
	//printf("%d�� �����", s);
	//for (x = 1; x <= s; x++)
	//	if (s % x == 0)
	//	{
	//		if (e % 5 == 0)
	//			puts("");
	//		printf("%d\t", s / x);
	//		e++;
	//	}
	//printf("\n�� �� %d���� ����� ������ �ִ�", e);

#pragma endregion

#pragma region ���� ������

	/*�ڷ����� �������� ���� ���·� ��� �ڷ�����
	������ �� �ִ� ������ �Դϴ�*/

	int data = 100;
	float health = 99.75f;


	void* vptr = &data;

	//*vptr = 1000;

	/*���� �����ʹ� �޸� �ּҿ� �����ؼ�
	���� ������ �� �����ϴ�*/

	//*(int*)vptr = 1000;
	//
	//printf("data ������ �� : %d\n", data);
	//
	//vptr = &health;
	//
	//*(float*)vptr = 100.0f;
	//
	//printf("health ������ �� : %f\n", health);
	//
	//vptr = "Visual Studio";
	//
	//printf("vptr�� ����Ű�� �� : %s\n", vptr);

	/*���������ͷ� ������ �޸𸮿� �����Ϸ��� 
	���� �����Ͱ� ����Ű�� ������ �ڷ�������
	�ڷ��� ��ȯ�� ���ּ��� �մϴ�*/
#pragma endregion


}