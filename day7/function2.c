#include<stdio.h>

//함수 매개변수를 구조체로 변경 적용
typedef struct numbers {

	int num1;
	int num2;
	int num3;

} NUM;

//숫자 2개를 입력받아 합쳐서  return
int MyFunc2(NUM n) {

	//매개변수의 자료형이 바뀌거나 갯수가 바뀌게 되면 함수를 사용하는 곳에서도 코드를 바꿔야 한다
	int result = n.num1 + n.num2 + n.num3;

	return result;
}

int main8() {

	NUM n4 = { 1,2,3 };

	int n1 = 1, n2 = 2, n3 = 3;

	int result = MyFunc2(n4);   

	printf("결과는 : %d \n", result);

	result = MyFunc2(n4);

	printf("결과는 : %d \n", result);


	return 0;
}