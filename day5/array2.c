#include<stdio.h>

int main2() {

	//배열 (교재 150p)

	//배열 초기화
	int numbers[3] = { 1,2,3 };
	double dnum[] = { 0.1,0.2,0.3 };           //3칸 자동 생성

	//문자 배열에 한해서는 문자열 문번을 제공

	char str[] = "hello";                       //6칸 자동 생성
	char ss[] = { 'h','e','l','l','o','\0'};    //6칸 자동 생성
	//(맨 마지막 \0은 옛날 통신상태가 불안정할때 완벽히 메시지가 도착했다는 표시로 사용)

	printf("%s \n", str);
	printf("%s \n", ss);

	//배열 선언
	int nums[3];

	//배열 대입
	//{}는 초기화 할때만 사용 가능

	nums[1] = 0;

	int nn[3] = { 1,2,3 };












	return 0;
}