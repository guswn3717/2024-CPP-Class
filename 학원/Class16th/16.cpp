#include <stdio.h>
#include<stdarg.h>
#include<math.h>

void Debug(int count, ...)
{
	//va_list : ���� ���� ����� �����ϴ� ����
	va_list list = NULL;

	//va_start : ���� ���� ����� ����ϱ� ���� �ʱ�ȭ �ϴ� �Լ�
	va_start(list, count);

	//va_arg : ���� ���� ��Ͽ��� ���� �������� Ư�� �ڷ����� ũ�⸸ŭ �̵��ϴ� �Լ�
	for (int i = 0; i < count; i++)
		printf("%d", va_arg(list, int));

	//va_end : ���� ���� ����� ��� �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�
	va_end(list);

}

double Add(double x, double y)
{
	return x + y;
}

double Substract(double x, double y)
{
	return x - y;
}

double Multiply(double x, double y)
{
	return x * y;
}

double Divide(double x, double y)
{
	return x / y;
}

void Calculator(double (*ptr)(double x, double y),double u, double v)
{
	printf("%lf\n", ptr(u, v));
}

int main()
{
#pragma region ���� ���� ���
	/*�Ű� ������ ������ �������� ���� �Ű� ������ ���� ��
	����ϴ� �μ� �Դϴ�*/

	//Debug(3, 10, 20, 30);
	//
	//puts("");
	//
	//Debug(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	//int a = 0;
	//int b = 0;
	//double c = 0;
	////sqrt
	//printf("���� X�� ��ġ : ", a);
	//scanf_s("%d", &a);
	//
	//printf("���� Y�� ��ġ : ", b);
	//scanf_s("%d", &b);
	//
	//c = pow(a, 2) + pow(b, 2);
	//
	//if (5 >= sqrt(c))
	//	printf("����!!! ������ ���� ���� �ȿ� ���Խ��ϴ�!!!\n");
	//else
	//	printf("SAFETY");
	
#pragma endregion

#pragma region �Լ� ������
	/*�Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�*/

	//Calculator(Add, 10, 20);
	//Calculator(Substract, 10, 20);
	//Calculator(Multiply, 10, 20);
	//Calculator(Divide, 10, 20);

	/*�Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	��ġ�ؾ� �մϴ�*/

#pragma endregion


	return 0;
}