#include <stdio.h>

int main4() {

	//이름, 년도, 월, 일,  f =======> 변수 사용 처리
	//문자열[] 변수 : 이름
	//정수 변수 : 년도, 월, 일
	//문자변수 : f

	char name[] = "홍길동";

	int year = 2023;
	int month = 2;
	// char month[] = "02";
	int day = 18;

	char func = 'f';

	printf("작성자 : %s\n", name);
	printf("작성일자 : %d-%02d-%d\n", year, month, day);
	printf("기능 : print%c로 문자열 출력\n\n", func);

	printf("작성자 : 홍길동\n");
	printf("작성일자 : 2023-02-18\n");
	printf("기능 : printf로 문자열 출력\n");


	return 0;
}