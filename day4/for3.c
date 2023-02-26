#include <stdio.h>

int main10() {

	//교재 138p

	//int dan, mul;

	////단수 for 문
	//for (dan = 2; dan < 10; dan++) {
	//	//곱하기 for 문
	//	for (mul = 1; mul < 10; mul++) {
	//		printf("%d", dan * mul);
	//	}
	//	printf("\n");
	//}

	//제어문(조건문,반복문,기타) : 중첩시킬 수 있음

	//if 안에 if
	int n1 = 0, n2 = 1;

	if (n1 < n2) {
		if (n1 != n2) {
			printf("n1과 n2는 같지 않다.\n");
		}
		printf("n1이 작다 \n");
	}

	//for 안에 if
	for (int i = 0; i < 3; i++) {
		if (n1 != n2) {
			printf("조건문 코드 ");
		}
		printf("반복문 코드 \n");
	}

	//if 안에 for
	if (n1 == n2) {
		for (int i = 0; i < 3; i++) {
			printf("조건문 안에 있는 반복문");
		}
	}

	//for 안에 for(이중반복문)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {    //바깥에 있는  for 갯수만큼 for 반복
			printf("안쪽 for %d \n", j);
		}
		printf("  바깥 for %d \n", i);
	}

	//이중 for 문
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {    //바깥에 있는  for 갯수만큼 for 반복
			printf("i = %d : j = %d \n", i, j);
		}
	}





	return 0;
}