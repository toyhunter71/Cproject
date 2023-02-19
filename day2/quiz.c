#include <stdio.h>

int main5() {

	//2.
	int num1 = 27;

	printf("%d \n", num1 >= 10);        //1
	printf("%d \n", num1 != 5);

	printf("%d \n", num1 >= 27);        
	printf("%d \n", num1 == 27);        //1

	printf("%d \n", num1 <  30);        //1
	printf("%d \n", num1 <= 27);

	//3.
	int kor = 86, eng = 75, math = 88, soc = 60, sci = 96;

	double avg = (kor + eng + math + soc + sci) / 5.0;

	printf("과목 평균은 %0.2lf 입니다 \n", avg);

	//4.
	int num = 5;

	printf("num의 값 : %d \n", ++num);     //6
	printf("num의 값 : %d \n", num++);     //6
	printf("num의 값 : %d \n", ++num);     //8


	return 0;
}