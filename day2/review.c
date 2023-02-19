#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {

	//출력 printf
	printf("hello world\n");
	printf("주석은 //");

	// // 한줄 주석 ( 이줄은 코드가 아니라 메모로 취금 ctrl+shift+/)  코드 주석

	// /* */ 여러줄 주석  설명 주석

    /*
	   안녕하세요
	   반갑습니다.
	   여러줄 주석 입니다

	   ctrl + z : 뒤로가기
	   ctrl + y : 뒤로가기 취소
	
	*/

	// 변수(variable) : 저장공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수; 
	char word;              //문자형 변수     1byte
	int  number;            //정수형 변수     4byte
	double dNumber;         //실수형 변수     8byte
	char str[256];          //문자열형 변수   256 byte

	// 변수에 값을 대입(대입연산자)
	// 변수명 = 데이터값;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	
	sprintf(str,"hi world");

	//변수 초기화(변수 선언과 동시에 대입까지)
	char str2[256] = "hello world";

	// 변수 사용
	int number2 = number;   //numberdp 들어 있는 값을 사용(자료형 없이 적어주기)

	printf("문자형: %c\n", word);
	printf("정수형: %d\n", number);
	printf("실수형: %lf\n", dNumber);
	printf("문자열형: %s\n", str);
	printf("문자열형: %s\n", str2);
	
	// +,-,*,/,%

	//% : 나머지 구하기

	// 정수형 또는 실수형 변수 2개를 만들고

	int n1 = 10, n2 = 20;
	double n3 = 10.0, n4 = 20.0;

	int n5 = n1 + n2;
	int n6 = n1 - n2;
	int n7 = n1 * n2;
	int n8 = n1 / n2;	
	int n9 = n1 % n2;

	printf("정수형 합 : %d\n", n5);
	printf("정수형 차 : %d\n", n6);
	printf("정수형 곱 : %d\n", n7);
	printf("정수형 분 : %d\n", n8);
	printf("정수형 몫 : %d\n", n9);
	
	double n10 = n3 + n4;
	double n11 = n3 - n4;
	double n12 = n3 * n4;
	double n13 = n3 / n4;
	double n14 = n1  % n2;

	printf("실수형 합 : %0.1lf\n", n10);
	printf("실수형 차 : %0.1lf\n", n11);
	printf("실수형 곱 : %0.1lf\n", n12);
	printf("실수형 분 : %0.1lf\n", n13);
	printf("실수형 몫 : %0.1lf\n", n14);
	

	


	return 0;
}