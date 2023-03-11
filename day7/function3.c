#include<stdio.h>

typedef struct traget {

	int num1;
	int num2;

} T;

void Swap(T* t) {

	int temp;

	temp = (*t).num1;
	(*t).num1 = (*t).num2;
	(*t).num2 = temp;


}

void Swap2(T* t) {

	int temp = t->num1;
	t->num1 = t->num2;
	t->num2 = temp;
}


int main() {

	// C언어 : 함수 + 구조체 + 포인터
	T t1 = { 1,2 };
	T t2 = { 3,4 };

	T* p_t2 = &t2;

	printf("변경 전 %d, %d \n", t1.num1, t1.num2);

	Swap(&t1);      //t1 구조체변수의 위치(주소값)를 넘겨준다

	printf("변경 후 %d, %d \n", t1.num1, t1.num2);
	
	printf("======================================= \n");

	printf("변경 전 %d, %d \n", p_t2->num1, p_t2->num2);

	Swap(p_t2);      //t2 구조체변수의 위치(주소값)를 넘겨준다

	printf("변경 후 %d, %d \n", p_t2->num1, p_t2->num2);



	return 0;
}