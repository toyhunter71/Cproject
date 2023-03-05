#include<stdio.h>
#include<string.h>

int main3() {

	//교재 209p 
	// #1
	//두 개의 문자열을 입력받아 같은지 다른지 알려주는 프로그램 "%[^\n]s"
	char str1[50] = {0,};
	char str2[50] = {0,};

	printf("첫번째 문자열을 입력 하세요 >>> ");
	scanf("%[^\n]s", str1);

	rewind(stdin);    //버퍼 비우기 (쓰레기값 처리)

	printf("\n두번째 문자열을 입력 하세요 >>> ");
	scanf("%[^\n]s", str2);

	if (strcmp(str1, str2) == 0) {
		printf("입력된 두 문자열은 같습니다! \n");
	}
	else {
		printf("입력된 두 문자열은 다릅니다! \n");
	}

	//#2
	//위 입력받은 무자열 중 길이가 긴 문자열부터 출력하게 해 주세요

	int str1_len = strlen(str1);
	int str2_len = strlen(str2);

	if (str1_len > str2_len) {
		printf("%s %s", str1, str2);
	}
	else {
		printf("%s %s", str2, str1);
	}

	return 0;

}