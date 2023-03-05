#include<stdio.h>

int main1() {

	//이차원 배열 : 배열 안에 배열
	//삼차원 배열 : 배열 안에 배열 안에 배열

	int arr[3][2] = { {1,2},{3,4},{5,6} };

	printf("%d \n", arr[1][0]);     //3  ---> 조심

	char str1[] = "abcd";          //5칸짜리 char : 초기화 해준만큼 알아서 배열 크기 잡음
	char str2[5] = "abcd";
	char* str1_1 = "abcd";         //포인터로 초기화를 통해 5칸짜리 배열을 생성

	char str3[5][5] = { "커피","라면","우유","물","빵" };   //5,5,5,3,3   한글은 char 2칸

	//이차원 배열 전부 출력  ===> 이중반복문

	for (int i = 0; i < 3;i++) {                              //바깥 for 문은 바깥 배열 쪼개기
		for (int j = 0; j < 2;j++) {                          //안쪽 for 문은 안쪽 배열 쪼개기
			printf("%d ", arr[i][j]);
		}
	}

	//str3  전불출력

	for (int i = 0; i < 5; i++) {
		printf("%s", str3[i]);
		if (i < 4) {
			printf(", ");
		}
	}

	return 0;
}