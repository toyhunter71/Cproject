#include <stdio.h>

int main3() {

	//연산자
	//1.대입 연산자 =  
	int num1 = 3;
	int num2 = 4;
	
	//2.산술 연산자
	// 더하기, 빼기, 곱하기, 나누기, 나머지 구하기
	 
	//3.누적 연산자
	//+=, -=, *=, /=, %= (줄임말)
	num1 = num1;           //왼쪽은 저장공간, 오른쪽은 안에 있는 값
	num1 = num1 + 2;       //num1에 들어있는 값에 +2 를 한다음 num1에 그대로 담는다
	num1 += 2;             //'누적 연산자는 줄인 말'이다
	num1 -= 1;
	num1 *= 3;
	num1 /= 1;
	num1 %= 1;

	printf("원본 num2: %d \n", num2);
	num2 += 1;
	printf("누적 연산한 num2: %d \n", num2);

	//4.증감 연산자
	// ++, --
	// 누적연산자를 한번 더 줄인 표현(+1, -1 을 누적연산 하는 경우에만 사용)
	num1 = num1 + 1;
	num1 += 1;
	num1++;
	++num1;

	num1 = num1 - 1;
	num1 -= 1;
	num1--;
	--num1;

	// 타이밍 차이(전위 prefix, 후위 postfix)
	++num1;                     //먼저 1 더하고 저장해서 해당 코드를 실행
	num1++;                     //코드 실행 다 끝나고(;) 1을 더해서 저장

	printf("%d\n", ++num2);     //1을 더하고 출력
	printf("%d\n", num2++);     //출력하고나서 1 더하기`


	//5.비교 연산자
	//6.관계 연산자
	//7.삼항 연산자
	//8.비트 연산자
	//9.쉬프트 연산자





	return 0;
}