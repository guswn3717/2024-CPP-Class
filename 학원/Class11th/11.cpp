#include <stdio.h>

void Awake()
{
	printf("Awake\n");

	Awake();
}

void Recursive(int count)
{
	if (count <= 0)
		return;
	
	Recursive(count - 1); //ť

	printf("i ������ �� : %d\n", count);

	//Recursive(count - 1); ����
}

inline void Process(int data)
{
	printf("%d%% ��ŭ �����Ͱ� ó���Ǿ����ϴ�", data);

	/*�ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ ��
	�¶��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ�
	�� ��ȯ�Ǳ⵵ �մϴ�*/
}

int main()
{
#pragma region	 ��� �Լ�
	/*� �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	���ा�� �Լ��Դϴ�.*/

	//Awake();

	/*��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	���� �����÷ο찡 �߻��մϴ�*/

	//Recursive(3);

	/*��� �Լ��� ��� Ư���� �������� �Լ���
	��ȯ�ؾ� �ϸ�, ��������� ȣ���� �Լ���
	���� �����ӿ� ���� �������� ȣ��� �Լ�
	��ó ���ʴ�� ���� �������� ���� �˴ϴ�*/
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

	//int asdf[5] = { 4, 7, 2, 9, 1 };
	//int a = asdf[0];
	//int b = asdf[0];
	//for (int i = 0; i < 5; i++)
	//{
	//	if (a < asdf[i])
	//		a = asdf[i];
	//
	//	if (b > asdf[i])
	//		b = asdf[i];
	//}
	//printf("%d\n", a);
	//printf("%d\n", b);
	


		
#pragma endregion

#pragma region �ζ��� �Լ�
	/*�Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	�Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�*/

	//Process(75);

	/*�ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ�
	ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ�
	�Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������
	ũ�Ⱑ Ŀ���� �˴ϴ�*/

#pragma endregion

#pragma region �Ҽ�

	int a = 0;
	int b = 0;

	printf("�� �Է� : ");
	scanf_s("%d", &a);

	for (int i = 2; i <= a; i++)
		if (a % i == 0)
			b++;

	if (b == 1)
		printf("�Ҽ�");
	else
		printf("�ռ���");
	


	

#pragma endregion

	return 0;
}