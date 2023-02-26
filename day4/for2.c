#include <stdio.h>

int main9() {

	//교재 135p

	for (int i = 0; i < 3; i++) {        //지역변수
		printf("i is %d now \n", i);
	}

	//교재 136p

	int num;  // 전역변수

	for (num = 0; num != -1;) {
		printf("숫자를 입력하세요(-1 입력시 종료) : ");
		scanf("%d", &num);
	}

	/*
	for(초기값;조건식;증감량) {            //증감량은 생략할 수 있다.
	    조건에 맞으면 반복할 코드;
	}	
	*/




	return 0;
}