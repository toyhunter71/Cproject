#include<stdio.h>

//정수 2개를 전달받아 더 큰 정수를 반환
int getBigger(int n1, int n2) {

	if( n1 > n2 ){
		return n1;
	}
	else if (n2 > n1) {
		return n2;
	}
	else {
		return 0;
	}
}

//#1  --> void
int* Calc(int n1, int n2) {

	static int calc[4] = { 0, };

	calc[0] = n1 + n2;
	calc[1] = n1 - n2;
	calc[2] = n1 * n2;
	calc[3] = n1 / n2;

	return calc;
}

//#2
int Calc1(int n1, int n2) {

	int sum = 0;

	for (int i = n1 + 1; i < n2; i++) {
		sum += i;
	}

	return sum;
}

//#3
int Calc2(int n1) {

	int plus_200 = 0;
	int cnt = 0;

	plus_200 = n1 + 200;

	for (int i = n1; i <= plus_200; i++) {
		if (i % 7 == 0) {
			cnt++;
		}
	}
	return cnt;
}

double Calc3(int n1) {

	double heigth = 0.0;

	heigth = n1 / 100.0;

	return heigth;
}

void Calc4(int n1) {

	int hour = n1 / 3600;
	int min = (n1 % 3600) / 10;
	int sec = (n1 % 3600) % 10;

	printf("\n시간은 %d시간%d분%d초 입니다", hour, min, sec);
}
 

int main() {

	//교재 228p

	//int result;

	//result = getBigger(3,5);
	//printf("첫번째 결과 : %d \n", result);

	//result = getBigger(8,2);
	//printf("두번째 결과 : %d \n", result);

	//result = getBigger(4,4);
	//printf("세번째 결과 : %d \n", result);

	//교재 237p

	//#1
	//두 개의 정수를 매개 변수로 입력 받아 두정수의 덧셈, 뺄셈, 나눗셈, 곱셈 결과를 모두 출력하는 함스 정의

	int* result = Calc(4, 2);
	int sum = 0;
	int cnt = 0;
	int heigth = 0;
	double dHeigth = 0.0;

	printf("#1-----------------------------------");

	printf("\n두 수의 덧셈은 %d 입니다", *(result+0));
	printf("\n두 수의 뺄셈은 %d 입니다", *(result+1));
	printf("\n두 수의 곱셈은 %d 입니다", *(result+2));
	printf("\n두 수의 나눗셈은 %d 입니다", *(result+3));



	//#2
	//두 정수를 매개 변수로 받아 두 정수 사이의 모든 숫자의 합을  반환하는 함수 정의

	printf("\n#2-----------------------------------");

	sum = Calc1(5, 9);
	printf("\n총합은 : %d", sum);
	

	//#3

	printf("\n#3-----------------------------------");

	cnt = Calc2(100);
	printf("\n배수의 갯수 : %d", cnt);

	//#4

	printf("\n#4-----------------------------------");

	printf("\n키를 입력해 주세요(cm) >>>> ");
	scanf("%d", &heigth);

	dHeigth = Calc3(heigth);
	printf("당신의 키는 %0.2fm 입니다", dHeigth);

	//#5

	printf("\n#5-----------------------------------");

	Calc4(3665);



	return 0;
}
