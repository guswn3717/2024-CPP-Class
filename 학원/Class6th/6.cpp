#include <stdio.h>
#define SIZE 5

int main()
{

#pragma region 자료형 변환

	/*서로 다른 자료형을 가지고 있는 변수끼리
	연산이 이우러질 때 기존에 지정했던 자료형을
	다른 자료형으로 변환하는 과정입니다.*/

#pragma region 암묵적 형 변환
	/*서로 다른 자료형으로 연산이 이루어질 때
	자료형의 크기가 큰 자료형으로 변환되느느 과정입니다*/
	/*
	int data = 10;

	float storage = 7.5f;

	printf("data + storage = %f\n", data + storage);

	printf("정수형storage = %d\n", data);
	*/
	/*표현 범위가 작은 데이터에 표현 범위가 큰 데이터를 저장하게
	되면 암묵적으로 데이터 손실이 발생합니다*/

#pragma endregion

#pragma region 명시적 형 변환
	/*연산이 이루어지기 전에 사용자가 직접 자료형을
	변환하는 과정입니다*/
	/*
	int health = 10;
	int armor = 3;

	float result = (float)health / armor;

	printf("%f\n", result);
	*/
	/*정수형 변수끼리 연산을 수행하게 되면 정수의
	결과 값만 가질 수 있습니다*/

#pragma endregion


#pragma endregion

#pragma region 매크로
	/*프로그램 내에서 특정한 데이터가 문자열로 정의
	되고 처리되는 과정입니다*/
	/*
	printf("SIZE 매크로의 값 : %d\n", SIZE);
	*/
	/*매크로의 경우 자료형이 존재하지 않으므로 메모리
	공간을 가지고 있지 않습니다*/

#pragma endregion

#pragma region 단축 평가 계산
	/*첫 번째 인수가 값을 결정하기에 충분하지
	않으면 두 번쨰 인수를 계산하는 부분을
	수행하지 않은 계산입니다*/
	/*
	int x = 1;
	int y = 2;

	if (x == 0 && y++)
		printf("AND의 조건이 '참'입니다\n");
	printf("y의 값 : %d\n", y);
	*/
#pragma endregion

#pragma region 일부터 십까지의 합
	/*
	int a=0;

	for (int b = 0; b <= 10; b++)
		a += b;

	printf("%d", a);
	*/
#pragma endregion

#pragma region Star
/*
	for (int x = 0; x <= 4; x++)
	{
		for (int y = 0; y <= x; y++)
			printf("*");
		puts("");
	}
*/
#pragma endregion

}