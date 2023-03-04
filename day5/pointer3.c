#include<stdio.h>

int main7() {

	//교재 168~170p

	//#1
	int a = 10;      //변수 a에 10 담아서 만들고
	int* p = &a;     //포인터 변수 p에 a의 주소를 담아 만들고

	*p = 20;         //역참조해서 20 넣으니깐 a dp 20 들어가고
	printf("%d", a);

	*p = 50;
	printf("%d", a);
	
	//#2
	printf("\n");

	//정수 10을 저장하는 int형 변수 number를 선언 및 초기화하고
	//number가 저장된  메모리 주소를 저장하는 포인터 변수 pnumber를 선언합니다.
	int number = 10;
	int* pnumber = &number;

	printf("%d / %p \n", *pnumber,pnumber);

	//#3 코드 완성하기
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;

	printf("%d \n", *ptr);

	ptr = &num2;

	printf("%d \n", *ptr);

	//#4 코드 완성하기
	int n1 = 100, n2 = 200;
	int *ptr1 = &n1, *ptr2 = &n2;
	printf("%d %d \n", *ptr1, *ptr2);

	ptr1 = &n2;
	ptr2 = &n1;

	printf("%d %d \n", *ptr1, *ptr2);















	return 0;
}