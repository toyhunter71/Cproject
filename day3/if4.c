#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//교재 122 #2

	/*int num = 0;

	printf("정수를 입력하세요  >>>>> ");
	scanf("%d", &num);

	num = num % 2;

	if (num > 0) {
		printf("홀수 입니다.");
	}
	else {
		printf("짝수 입니다.");
	}*/

	// #3

	/*int age = 0;

	printf("나이를 입력하세요 >>>>>>>>   ");
	scanf("%d", &age);

	if (age < 6 || age >= 65) {
		printf("요금은 0원 입니다.");
	}
	else if (age < 13) {
		printf("요금은 500원 입니다.");
	}
	else if (age < 19) {
		printf("요금은 900원 입니다.");
	}
	else {
		printf("요금은 1250원 입니다.");
	}*/

	//if ~ else if ~ else : 조건문

	//교재 123쪽 #4
	//switch 는 실수 않됨

	//int kor = 88, eng = 90, math = 58, soc = 81, sci = 72;
	//int avg = 0;

	//avg = (kor + eng + math + soc + sci) / 5;
	//printf("과목의 평균은 %d 입니다.\n", avg);

	//avg = avg - (avg % 10);
	//printf("과목의 구간은 %d 입니다.\n", avg);

	////(avg / 10) 을 이용하여 앞자리를 이용하여 산출 가능
	////100인 경우도 생각해야 함

	//switch (avg) {
	//case 100 :
	//	printf("학점 A 입니다.");
	//	break;
	//case 90 :
	//	printf("학점 A 입니다.");
	//	break;
	//case 80 :
	//	printf("학점 B 입니다.");
	//	break;
	//case 70 :
	//	printf("학점 C 입니다.");
	//	break;
	//case 60 :
	//	printf("학점 D 입니다.");
	//	break;
	//default:
	//	printf("학점 F 입니다.");
	//}

	//윤년 구하는 프로그램 만들기
	//윤년 : 년도가 4의 배수이면서 100의 배수가 아닌 년도 or  400의 배수인 년도
	//윤년이면 2월 29일로 끝남
	//년도를 입력하면 해당 년도가 윤년인지 판별해주는 프로그램을 만들자

	int year = 0;

	int y400 = 0;
	int y4 = 0;
	int y100 = 0;

	printf("해당년도를 입력하세요 >>>>>>> ");
	scanf("%d", &year);

	y400 = year % 400;
	y4 = year % 4;
	y100 = year % 100;

	printf("\n");

	if (y400 == 0) {
		printf("%d년은 윤년입니다.", year);
	}
	else if (y4 == 0 && y100 != 0) {
		printf("%d년은 윤년입니다.", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", year);
	}

	printf("\n");





	return 0;

}