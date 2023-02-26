#include<stdio.h>

int main() {

	//교재 144p
	//#1
	//100 ~ 200 숫자 중 3과 7의 배수를 출력하는 프로그램 만들기
	
	for (int i = 100; i <= 200; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n\n");

	//#2
	//2~9 숫자 중 두개를 입력받아 구구단을 출력하는 프로그램
	//만약 4와 8을 입력하면  4단~8단을  출력
	//단, 8과 4를 입력해도 4단~8단을 출력

	int start = 0, end = 0;
	int chg = 0;

	printf("첫번째 수를 입력하세요 >>>>> ");
	scanf("%d", &start);

	printf("두번째 수를 입력하세요 >>>>> ");
	scanf("%d", &end);

	if (start > end) {
		chg = end;
		end = start;
		start = chg;
	}

	for (int n1 = 1; n1 < 10; n1++) {
		for (int n2 = start; n2 <= end; n2++) {
			printf("%d X %d = %d\t", n2, n1, n2 * n1);
		}
		printf("\n");
	}
	 






	return 0;
}