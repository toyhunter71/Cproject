#include <stdio.h>

int main2() {
	//변수(수학) : 변하는 수 x,y,z.....
	//변수(프로그래밍) : 저장공간(데이터 값을 저장할 수 있는 공간)

	//자주 바뀔 것 같은, 자주 사용할 것 같은 값은 미리 저장해 놓자
	//그리고 수정이 필요하면 저장해 놓은 곳만 바꾸면 되게 끔

	char str[] = "2022-02-18"; //일괄 수정이 필요하면 이 곳만 바꾸면 됨
	
	printf("오늘은 %s 입니다\n", str);
	printf("오늘은 %s 입니다\n", str);
	printf("오늘은 %s 입니다\n", str);
	printf("오늘은 %s 입니다\n", str);
	printf("오늘은 %s 입니다\n", str);
	printf("오늘은 %s 입니다\n", str);

	return 0;
}