#include <stdio.h>

int main4() {

	//5.비교 연산자
	//비교식을 제시하면 맞을때는 1, 틀릴때는 0 이라고 알려줌
	// >, <, >=, <=, ==, != (크다, 작다, 크거나 같다, 작거나 같다, 같다, 다르다)
	int num1 = 10, num2 = 11, num3 = 10;

	printf("== : %d \n", num1 == num2);
	printf("== : %d \n", num1 == num3);

	printf(">  : %d \n", num1 > num2);
	printf("<  : %d \n", num1 < num2);
	printf(">= : %d \n", num1 >= num2);
	printf("<= : %d \n", num1 <= num2);
	printf("!= : %d \n", num1 != num2);

	//6.관계 연산자
	//&&, ||, ! (and, or, not)
	//&& : and, 양쪽이 모두 맞으면 1, 하나라도 틀리면 0
	printf("&& : %d \n", num1 != num2 && num1 == 10);
	printf("&& : %d \n", num1 != num2 && num1 == 11);

	//|| : or, 둘 중 하나라도 맞으면 1, 둘다 틀릴때만 0
	printf("|| : %d \n", num1 == num2 || num2 == 11);

	//! : not, 0 은 1로 바꾸고, 0 이외의 숫자는 0으로 바꿈
	//틀린건 맞도록, 맞는 건 틀리도록 반전
	printf("!  : %d \n", !(num1 == 10));
	printf("!  : %d \n", !(num1 == 11));



	return 0;
}