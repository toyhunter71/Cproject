//파일명 : while2.c (교재 127) ctrl + f / alt + 마우스(열 삽입)
#include <stdio.h>

int main2() {

	//반복문 while, for
	//while () {}
	//if () {}: ()조건이 맞으면 {} 실행
	//while () {} : ()조건이 맞으면 {} 실행하고 ()로 돌아감

	//if (1) {  //1 == ture, 0 == false
	//	printf("if문을 실행 합니다.\n\n");
	//}

	//printf("if문 끝 \n");

	while (1) {
		printf("while 문을 실행 합니다. \n\n");
	}

	printf("while 문 끝 \n");

	//if문과 while문의 차이 : 조건이 맞으면 실해하고 돌아가냐 안돌아가냐 차이
	//while : () 조건이 맞으면 {} 실행하고 위로 올라가서 () 조건을 다시 검사(틀릴때까지)



	return 0;
}