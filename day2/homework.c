#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//page101 #3, #4, #5

	//#3
	//바구니에 복숭아를 10개씩 담을 수 있다
	//복숭아 갯수를 사용자로부터 입력받고 수를 출력하자
	//예를 들어, 복숭아 16개를 입력받으면 바구니 2개가 필요
	//복숭아 157개를 입력받으면 바구니 16개가 필요

	int peach = 0;
	int basket = 0;

	printf("복숭아의 개수는 : ");
	scanf("%d", &peach);

	basket = peach / 10;
	peach % 10 > 0 ? basket++ : basket;

	printf("필요한 바구니의 수 : %d\n", basket);


	//#4
	//사용자로부터 실수형 변수에 값을 입력받고 1의 자리 숫자만 출력하는 프로그램 만들기
	//예를 들어, 126.12 ===> 6  / 33.14  ==>  3

	double num = 0.0;
	int rNum = 0;

	printf("\nNUM : ");
	scanf("%lf", &num);

	rNum = (int)num % 10;

	printf("1의 자리 숫자는 %d 입니다\n", rNum);


	//#5
	//사용자로부터 초(second)를 입력받아 [시,분,초] 형태로 변환해 보세요
	//예를 들어, 3665  ==> 1시간 1분 6초

	int second = 0;
	int hour = 0, min = 0, sec = 0;

	printf("\n초를 입력하세요 : ");
	scanf("%d", &second);

	hour = second / 3600;
	min = (second - (3600 * hour)) / 60;
	sec = second - (3600 * hour + 60 * min);

	printf("시간은 %d시간 %d분 %d초 입니다!\n", hour, min, sec);






	return 0;
}