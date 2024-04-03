#include <stdio.h>

struct Node
{
	int data;
	Node* next;
}node1, node2, node3;



int main()
{
#pragma region ASCII 코드
	/*미국 정보 교환 표준부호(ASCII)는 7비트로 문자를
	표현하는 표준 코드입니다*/

	//int a = 'A';
	//
	//	a++;
	//
	//printf("%c", a);


#pragma endregion

#pragma region 자기 참조 구조체

	//node1.data = 10;
	//node2.data = 20;
	//node3.data = 30;
	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = NULL;
	//
	//struct Node* currentPtr = &node1;
	//
	//while (currentPtr != NULL)
	//{
	//	printf("%d\n", currentPtr->data);
	//	currentPtr = currentPtr->next;
	//}	

#pragma endregion

	

	return 0;
}