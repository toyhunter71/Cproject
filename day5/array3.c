#include<stdio.h>

int main3() {

	//교재 152p

	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };

	//배열의 개별 요소 초기화

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	//개별 요소 접근 및 출력
	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	//for 문을 통한 배열 요소 출력
	for (i = 0; i < 5; i++) {
		printf("%d \n", even[i]);
	}

	printf("\n");


	//교재 156p

	char mind[30] = "I Love programing!";

	printf("%s \n", mind);

	mind[9] = '\0';        //8번째 요소로  null 문자 삽입

	printf("%s \n", mind);

	mind[1] = '\0';

	printf("%s \n", mind);


	char str[50] = { 0, };       //50칸 모두 null 문자로 초기화

	printf("문자열을 입력하세요 >>>>> ");
	scanf("%s", str);           //문자열은 &기호가 필요 없음 (원래는 필요)

	printf(" 입력된 문자열은 : %s \n", str);















	return 0;
}