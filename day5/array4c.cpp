#include <stdio.h>

int main4() {

	//교재 158p
	//#1
	//길이가 5인  int형 배열을 선언하고 초기화 한다. 이 때 각 요소는 원하는 값을 담는다.
	//해당 배열에 대해 다음 결과를 출력 하기

	int nums[5] = { 90,85,76,88,57 };
	int sum = 0;
	double avg = 0;

	for (int i = 0; i < 5; i++) {
		sum += nums[i];
	}

	avg = sum / 5.0;

	printf("배열의 합은 %d이고, 평균은 %0.2f입니다 \n", sum, avg);

	//#2
	//영어단어를 하나 입력받아서 역순으로 출력하는 프로그램

	/*
	입력값 : hello
	출력값 : olleh
	*/

	char str[64] = { '\0', };      //64칸을 선언하면 63개까지 있다
	char chgstr[64] = { '\0', };
	int i = 0;
	int k = 0;
	int l = 0;


	printf("영어 단어를 입력 하세요  >>>>> ");
	scanf("%s", str);

	for (i = 0;0 < 64; i++) {
		

		if (str[i] == '\0') {
			break;
		}
		k++;
		printf("%d 번째 문자는 %c입니다", i, str[i]);
	}
	
	printf("k는 %d ", k);

	for (int j = k - 1 ; j >= 0; j--) {
		//if (str[j] = '\0') {
		//	continue;
		//}
		
		chgstr[l] = str[j];
		l++;
	}

	printf("영어 단어의 역순은 %s", chgstr);


	return 0;
}