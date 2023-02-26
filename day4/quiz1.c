#include <stdio.h>

int main12() {

	// 교재 143p

	//#1
	//사용자가 1 이상의 정수 n을 입력하면 1부터  n까자의 합을 구하시오

	int num = 0;
	int sum = 0;

	printf("정수를 입력하세요 >>>>  ");
	scanf("%d", &num);

	for (int i = 1; i <= num ; i++) {
		sum += i ;
	}

	printf("1 부터 %d 까지의 합은 %d 입니다. \n ", num, sum);

	//#2
	//1 부터 100 까지의 정수중 6의 배수만 출력하는 프로그램 만들기

	for (int i = 1; i <= 100; i++) {

		if (i % 6 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");

	//#3
	//아스키코드(교재 345p~346p) : 각 문자에 할당된 정수값
	//알파벳을 입력받아 출력하는 프로그램(단, 대문자면 프로그래 종료)
	//65~90 : 대문자, 97~122 : 소문자

	char word = '\0';

	while (1) {

		printf("알파벳을 입력하세요  >>>>>>>  ");
		rewind(stdin);                                // 버퍼문자 제거
		scanf("%c", &word);

		if (word >= 97 && word <= 122) {
			printf("입력받은 문자는 %c 입니다 \n", word);
		}
		else if (word >= 65 && word <= 90) {
			printf("프로그램을 종료합니다");
			break;
		}
	}



	return 0;
}