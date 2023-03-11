#include<stdio.h>
#include<string.h>

typedef struct worker {

	char* 이름;                //포인터
	char* 전화번호;
	int 월급;
} WORKER;

typedef struct worker1 {

	char 이름[50];                
	char 전화번호[14];
	int 월급;
} WORKER1;

int main6() {

	//교재 295p (2)
	//구조체 worker를 만들고 별명을 WORKER로 부여
	//멤버변수 : 이름(char*), 전화번호(char*), 월급(int)

	WORKER1 사원[3] = {                                      //배열 처리
		{"제임스","010-1111-2222", 3000000},
		{"앤디","010-3333-4444", 4000000},
		{"테리","010-5555-6666", 5000000}
	};

	//for (int i = 0; i < 3; i++) {
	for (int i = 0; i < sizeof(사원)/sizeof(WORKER1); i++) {
		printf("%s는 전화번호가 %s이고 월급은 %d원 입니다 \n", 사원[i].이름, 사원[i].전화번호, 사원[i].월급);
	}

	//구조체 사용(3개짜리 배열)









	return 0;
}