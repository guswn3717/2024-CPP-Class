#include <stdio.h>

void main()
{

#pragma region �����÷ο�

	/*Ư���� �ڷ����� ǥ���� �� �ִ� �ִ���
	������ �Ѿ ������ �����ϴ� �����Դϴ�*/

	char data = 128;

	printf("data ������ �� : %d\n", data);

	/*�ִ񰪺��� �� ���� ���� �����ϰ� �Ǹ� �ּڰ�����
	�ִ��� �Ѿ ��ŭ �ٽ� ����Ѵ�*/

#pragma endregion

#pragma region ����÷ο�

	/*Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������
	�Ѿ ������ �����ϴ� �����Դϴ�*/

	char asdf = -129;

	printf("atad ������ �� : %d", asdf);

	/*�ּڰ����� �� ���� ���� �����ϰ� �Ǹ� �ִ񰪺���
	�ּڰ��� �Ѿ ��ŭ �ٽ� ����մϴ�*/

#pragma endregion

#pragma region ��ȣ���� �ڷ���

	unsigned int exp = 4294967295;
	unsigned int count = -1;

	puts("\n");
	printf("exp ������ �� : %u\n", exp);
	printf("count ������ �� : %u\n", count);

	/*��ȣ���� �ڷ��������� �Ȱ��� ����÷ο��
	�����÷ο찡 �ۿ��Ѵ�*/

#pragma endregion

#pragma region �Ǽ� ������ �������� �������� ��ȯ�ϴ� ����

	/*10���� �Ǽ� �κ��� 1.0�� �� ������ ��� 2�� ����
	���� ���� ����� ���� �κ��� ������ �Ʒ��� ���� 
	��� �����մϴ�*/

	float x = 13.625f;

	printf(" %f\n", x);

#pragma endregion

# pragma region �ε� �Ҽ���

	/*�Ҽ����� ��ġ�� �������� �ʰ�, �Ҽ����� ��ġ��
	��Ÿ���� ����Դϴ�*/

	float decimal = 10.33333333333f;

	printf("decimal ������ �� : %f\n", decimal);

	/*�����ο� �ִ� ��Ʈ �߿��� ���� ���ʿ� �ִ� ����
	ǥ������ �ʽ��ϴ�.*/

#pragma endregion






}