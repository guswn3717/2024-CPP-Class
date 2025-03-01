#include <stdio.h>

int main()
{
#pragma region 문자열
	/*연속적인 메모리 공간에 저장된 문자
	변수의 집합입니다*/

	//const char* ptr = "Game";

	//*ptr = 'T';

	// %s 문자열을 출력하는 서식 지정자
	//printf("ptr이 가리키는 값 : %s\n", ptr);

	//ptr = "School";

	//printf("ptr이 가리키는 값 : %s\n", ptr);

	/*문자열의 경우 포인터를 이용하여 문자영
	상수를 가리키도록 할 수 있으며, 문자열 상수는
	데이터 영역의 읽기 전용공간에 저장되기 때문에 
	문자열의 값을 변경할 수 없습니다*/

	//char string [] = "Control";

	//printf("string배열의 크기 : %dbyte\n", sizeof(string));



	/*문자열은 공백도 함꼐 메모리 공간에 포함하여 크기를
	결정하며, 마지막 문자열의 끝을 알려주는 제어 문자가
	추가됩니다*/

	//char name[] = "ba\0rd";

	//name [0]

	//name = "Alistar";

	//printf("name 배열의 값 : %s\n", name);

	/*문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 
	있지만, 문자 배열 사이에 무효의 문자를 넣게 되면 무효의
	문자까지만 문자열을 출력합니다*/

#pragma endregion

#pragma region 약수
	//int s = 0;
	//int e = 0;
	//int x = 0;
	//
	//printf("입력 : ");
	//scanf_s("%d", &s);
	//
	//printf("%d의 약수는", s);
	//for (x = 1; x <= s; x++)
	//	if (s % x == 0)
	//	{
	//		if (e % 5 == 0)
	//			puts("");
	//		printf("%d\t", s / x);
	//		e++;
	//	}
	//printf("\n로 총 %d개의 약수를 가지고 있다", e);

#pragma endregion

#pragma region 범용 포인터

	/*자료형이 정해지지 않은 상태로 모든 자료형을
	저장할 수 있는 포인터 입니다*/

	int data = 100;
	float health = 99.75f;


	void* vptr = &data;

	//*vptr = 1000;

	/*범용 포인터는 메모리 주소에 접근해서
	값을 변경할 수 없습니다*/

	//*(int*)vptr = 1000;
	//
	//printf("data 변수의 값 : %d\n", data);
	//
	//vptr = &health;
	//
	//*(float*)vptr = 100.0f;
	//
	//printf("health 변수의 값 : %f\n", health);
	//
	//vptr = "Visual Studio";
	//
	//printf("vptr이 가리키는 값 : %s\n", vptr);

	/*범용포인터로 변수의 메모리에 접근하려면 
	범용 포인터가 가리키는 변수의 자료형으로
	자료형 변환을 해주서야 합니다*/
#pragma endregion


}