#include<stdio.h>

int main6() {

	//&(앰퍼샌트) : 해당 공간의 주소를 알려 줘
	//*(에스터리스크) : 해당 주소의 공간으로 이동해 줘
	//자료형 앞의 * : 포인터 변수 만들어 줘

	//교재 163p

	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char* cptr = &cnum;
	//int* iptr = &inum;
	//double* dptr = &dnum;

	//printf("%p \n", cptr);
	//printf("%p \n", iptr);
	//printf("%p \n", dptr);


	////포인터 변수 역참조(원보 출력)
	//printf("%c \n", *cptr);
	//printf("%d \n", *iptr);
	//printf("%if \n", *dptr);


	//교재 166p

	int num = 10;
	int* pnum;
	pnum = &num;

	*pnum = 20;  //pnum이 보관하고 있는 주소에 가서 20을 넣어라

	printf("%d \n", num);

	(*pnum)++;
	(*pnum)++;

	printf("%d \n", num);\
	printf("%p \n", &num);
	printf("%p \n", pnum);
	printf("%d \n", *pnum);







	return 0;
}
