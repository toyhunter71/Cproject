#include<stdio.h>
#include<string.h>

//원산지, 가격, 바리스타이름을 멤버 변수를 갖는 coffee 구조체를 정의해 보세요

struct coffee {

	char 이름[30];
	char 원산지[30];
	int 가격;
};


int main4() {

	//교재 295p(1)
	//구조체 사용
	
	struct coffee 모카 = { "이순신", "한국", 2000};

	//sprintf(모카.이름, "%s", "홍길동");
	//sprintf(모카.원산지, "%s", "브라질");
	//모카.가격 = 2000;

	//모카 = { "이순신", "한국", 2000 };   멤버변수 중 char 값은 직접 넣을 수가 없다

	printf("%s은 %s 모카커피를 %d원에 판매합니다.", 모카.이름, 모카.원산지, 모카.가격);







	return 0;
}