#include<stdio.h>

//함수 add
int add(int n1, int n2) {
	return (n1 + n2);
}

int AbsAdd(int n1, int n2) {

	if (n1 < 0) {
		n1 *= -1;
	}

	if (n2 < 0) {
		n2 *= -1;
	}

	int result = n1 + n2;

	return result;
}

int main4() {

	//함수 : 연산 기호에 한계가 있으니 사용자가 직접 만드는 연산자, 코드를 저장하는 기술
	//(){}

	//+.-.*./,% : 각각의 기능들이 있음, 수가 제한
	int num1 = -3 + 5;     //내가 원하는건 절대값을 해준다음 더하는 것을 원한다
	printf("%d \n", num1);

	//내가 직접 더하기를 만들어 보자
	int num2 = add(-3, 5);
	printf("%d \n", num2);

	//절대값으로 만들어 더해주는 기능을 만들어보자
	int num3 = AbsAdd(-3, 5);
	printf("%d \n", num3);


	return 0;
}

