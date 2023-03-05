#include<stdio.h>

//함수의 구조 : 입력값, return값, 자료형
//자료형 함수형(){}
//입력값 생략가능, return값 생략가능, 자료형은 return값을 따라간다
//입력값은 ()에 변수로 준비를 해두고, 내용은 {}에 입력한다

//입력값 없고, 반환값 없음
void First() {                //void  반환값 없음

	//사용자가 First  함수를 사용했을 때 동작할 코드를 적음

	char str[60];

	printf("첫번째 함수 사용 >>>> ");
	scanf("%s", str);

	printf("내가 입력한 문자열은 >>>> %s", str);
	
}


//입력값 있고, 반환값 없음
void Second(char* str) {

	printf("내가 전달한 문자열 >>>> %s", str);

}


//입력값 없고, 반환값 있음
char* Third() {

	char ss[50] = { 0, };
	printf("입력 할 문자열을 적으세요 >>>> ");
	scanf("%s", ss);

	return ss;
}


//입력값 있고, 반환값 있음
int Fourth(int n1, int n2, int n3) {

	printf("전달 받은 값 : %d, %d, %d \n", n1, n2, n3);

	int result = n1 + n2 + n3;

	return result;     //함수명 앞의 자료형은  return 값의 자료형과 동일하게
}




int main5() {

	//First();          //함수의 사용법

	//Second("문자열");   //입력 있고 반환 없음(입력값은 ()를 통해서 전달)

	char *str = Third();            //입력 없고 반환 있음(반환값이 있으면 변수로 받거나 변수처럼 사용한다)
	printf("반환받은 값 : %s \n", str);
	printf("반환받은 값 : %s \n", Third());

	//int str1 = Fourth(5, 7, -2);    //입력값 있고 반환값 있음
	//printf("결과값 : %d \n", str1);
	//printf("결과값 : %d \n", Fourth(1, 1, -1));



	return 0;
}
