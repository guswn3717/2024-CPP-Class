#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸�
	//�Ҵ��ϴ� �۾��Դϴ�

	//int* ptr = (int *)malloc(sizeof(int));
	//
	///*���� �Ҵ��� ���� �ð��� ���������� �޸���
	//ũ�⸦ �����ų �� ������, �������� �޸���
	//ũ�⸦ �Ҵ��� �� ����Ʈ ������ ��ȯ�մϴ�*/
	//
	//printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	//
	//*ptr = 100;
	//
	//printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	//
	///*�޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ�
	//��ȯ�ϱ� ������ �ڷ����� ��ȯ�� ���� �޸𸮿�
	//�Ҵ��ؾ� �մϴ�*/
	//
	//free(ptr);
	//free(ptr);
	//
	/*�������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ�
	�����Ƿ� */

#pragma endregion

#pragma region ��۸� ������
	/*�̹� ������ �޸� ������ ����Ű��
	�������Դϴ�*/



	int* ptr1 = (int*)malloc(sizeof(4));

	*ptr1 = 100;

	printf("ptr1�� ����Ű�� �� : %d\n", *ptr1);

	free(ptr1);

	*ptr1 = NULL;

	*ptr1 = 999;

	printf("ptr1�� ����Ű�� �� : %d\n", *ptr1);

#pragma endregion

#pragma region ���� �迭

	int dynamicArraySize = 5;

	int* arrPtr = (int*)malloc(sizeof(int) * dynamicArraySize);

	int size = (sizeof(int) * dynamicArraySize) / sizeof(int);

	

	for (int i = 0; i < size; i++)
	{
		arrPtr[i] = i + 1;
		printf("arrPtr[%d] : %d\n", i, arrPtr[i]);
	}
	int* arrPtr = (int*)malloc(sizeof(int) * 5);

	int size = (sizeof(int) * 5) / sizeof(int);

//====================================================================

	//free(arrPtr);
	//
	//dynamicArraySize = 10;
	//
	//arrPtr = (int*)malloc(sizeof(int) * dynamicArraySize);
	//
	//size = (sizeof(int) * dynamicArraySize) / sizeof(int);
	//
	//puts("");
	//
	//for (int i = 0; i < size; i++)
	//{
	//	arrPtr[i] = i + 1;
	//	printf("arrPtr[%d] : %d\n", i, arrPtr[i]);
	//}
	//
	//free(arrPtr);

#pragma endregion


	return 0;
}