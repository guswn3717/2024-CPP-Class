#pragma region 파일 처리 전처리문
/*시스템 파일이나 사용자 저의 파일을 프로그램 소스에
삽입하여 사용하기 위한 선언문입니다.

파일 처리 전처리문은 현재 소스 파일에 외부에 있는
파일을 포함하여 외부에 있는 함수를 사용할 수 있도록
설정하는 것입니다

파일 처리 전처리문의 경우 라이브러리 파일을 참조할 때는
<외부 파일.h>로 가져오며, 현재 경로에서 외부 파일을 참조할 때는
"외부 파일.h"로 가져옵니다.*/

#pragma endregion

#pragma region 시작

#include <iostream>
#include <stdio.h>
#include "data.h"

int main()

#pragma endregion

{

#pragma region 상수
	/*프로그램이 실행되는 동안 더 이상 변경할
	수 없는 메모리 공간입니다.*/
	
	const int data = 100;

	/*상수는 메모리 공간을 생성하는 동시에 초기화해야 하며
	한번 저장된 값은 더 이상 변경할 수 없습니다.*/

	//data = 99;

	/*상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	리터럴 상수라고 하며, 메모리 공간을 가지고 있는 상수를
	심볼릭 상수라고 합니다.*/


	//==========================================================================//
#pragma endregion

#pragma region 표준 출력 함수
	/*일련의 데이터를 형식 문자열에 자정되어 있는 형태로
	출력하는 함수입니다.*/

	printf("Hello World!");
	puts("");

	/*표준 출력 함수는 표준 입출력 헤더 파일을 선언해야
	사용할 수 있으며, 표준 출력 함수의 경우 문자열의
	형태로 값을 반환합니다.*/

#pragma endregion

#pragma region 서식 지정자
	// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.

	char alphabet = 'A';

	printf("alphabet 변수의 값  :  %c", alphabet);
	puts("");

	/*서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을
	넣을 수 있으며, 서식 자정자의 순서는 왼쪽에서부터 시작합니다.*/

	int integer = 10;
	float pi = 3.141592f;

	printf("integer : % d - pi : % f", integer, pi);
	puts("");
	printf("%d - %f = %f", integer, pi, integer - pi); 
	puts("");
	/*서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력할 수 있으며,
	서식과 변수의 형태가 일치하지 않을으면 원하는 값이 출력되지 않습니다.*/

	double dec = 3.333333333333333;
	printf("decimal의 값 : %.15lf\n", dec);
	
	/*표준 출력 함수로 소수를 출력할 때 4byte 크기의 실수형 자료형은
	수수점 이하 6자리까지만 표기하며, 8byte 크기의 실수형 자료형은
	소수점 이하 15자리까지만 표기합니다.*/

#pragma endregion

#pragma region 헤더 파일

	printf("value의 값 : %d", value);

#pragma endregion

	return 0;

}