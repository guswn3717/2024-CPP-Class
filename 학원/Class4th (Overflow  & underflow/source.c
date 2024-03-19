#include <stdio.h>

int main()
{

#pragma region 조건문
	/*어떤 조건이 주어질 때 해당 조건에 따라
	동작을 수행하도록 생행하는 명령문 입니다*/

#pragma region 관계연산자
	//두 개의 피연산자의 값을 비교하여 그 결과를
	//0 또는 1이라는 값으로 나타내는 연산자 입니다

	int result = 0;

	result = 10 > 5;

	printf("result 변수의 값 : %d\n", result);

	result = 5 < 4;

	printf("result 변수의 값 : %d\n", result);

	result = 5 >= 1;

	printf("result 변수의 값 : %d\n", result);

	result = 3 <= 1;

	printf("result 변수의 값 : %d\n", result);

	result = 10 == 10;

	printf("result 변수의 값 : %d\n", result);

	result = 10 != 10;

	printf("result 변수의 값 : %d\n", result);

	/*관꼐 연산자는 조건이 맞을 때 1이라는 값으로
	반환하며 조건이 틀릴때 0이라는 갑승로 반환합니다*/

#pragma endregion
	
#pragma region if 문
	/*어떤 특정한 조건을 비교하여 조건이 맞다면
	실행되는 명령문입니다*/

	int count = 5;

	if (count == 5)
		printf("if 문의 조건이 '참'입니다\n");

	/*if문은 조건이 1일때 실행되며, 0일 때 실행되지 않습니다*/

#pragma endregion

#pragma region else if문
	/*if문의 조건이 틀릴 때 else if문의 조건이
	맞다면 실행되는 명령문 입니다*/

	int level = 99;

	if (level == 81)
		printf("1차 전직 \n");
	else if (level <= 99)
		printf("2차 전직\n");

#pragma endregion

#pragma region else문
	/*if문과 else if 문의 조건이 다 틀리면
	실행되는 명령문 입니다*/

	int health = 100;

	if (health <= 0)
		printf("Error 404\n");
	else if (health == 50)
		printf("Error 404\n");
	else
		printf("Game Object\n");

	/*if문에 연결된 모든 조건문의 조건이 같다면
	가장 위에 있는 조건문만 실행됩니다*/
#pragma endregion

#pragma region switch 문(주석)
	//어떤 결과에 따라 그 결과부터 실행되는 명령문 입니다

	/*
	int a = 0;

	printf("1에서 4까지 선택");
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("타이틀\n");
	case 2:
		printf("마을\n");
	case 3:
		printf("던전\n");
	case 4:
		printf("낚시터\n");		
	default:
		printf("잘못된 입력입니다.\n");
	 }
	*/

	/*switch문의 경우 조건에 해당하는 값에 따라
	조건의 위치로 이동합니다*/

	/*switch문은 해당 조건이 완료되었을떄, break
	문이 없으면 나머지 밑에있는 case 문 까지 계속
	실행시키다가 종료합니다*/

#pragma endregion

#pragma region break문 (주석)
	/*특정한 지점에서 분기를 탈출하는 제어문 입니다*/

	/*
	printf("1에서 4까지 선택");
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("미스텔 봄바스틱\n");
		break;
	case 2:
		printf("숙이디비 토일렛\n");
		break;
	case 3:
		printf("끄리뻐르\n");
		break;
	case 4:
		printf("다이아몬드\n");
		break;
	default:
		printf("미스텔 봄바스틱님 께서 당신이 저지른 세상의 이치에 어긋난 짓을 막았습니다 감사하며 사십시오\n");
		break;
	}
	*/

	/*switch 문에는 조건식으로 실수형 변수와 실수형 상수를
	사용할 수 없습니다*/

#pragma endregion

#pragma region 논리 연산자

	//AND 논리 연산자

	
	int flag = 0;
	int damage = 10;
	char blood = 'o';

	if (damage == 10 && blood == 'o')
		printf("AND논리연산자\n");

	if (damage == 10 || blood == 'B')
		printf("OR논리 연산자\n");

	if (!flag)
		printf("NOT 논리 연산자\n");
	
#pragma endregion

#pragma endregion

#pragma region 사분면

	


#pragma endregion


	return 0;
}