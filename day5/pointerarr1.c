#include<stdio.h>

int main() {


	//교재 174p

	int arr[5] = { 1,2,3,4,5 };

	printf("배열의 이름 : %p \n", arr); 
	printf("첫번째 요소 : %p \n", &arr[0]);    //배열의 이름과 첫번째 요소의 이름이 같다
	printf("두번째 요소 : %p \n", &arr[1]);
	printf("세번째 요소 : %p \n", &arr[2]);

	printf("첫번째 요소 : %p \n", arr+0);      //주소는 +1을 할때마다 옆칸으로 이동한다
	printf("두번째 요소 : %p \n", arr+1);      //+1의 규모는 자료형과 동일(int 4 칸,char 1 칸)
	printf("세번째 요소 : %p \n", arr+2);

	printf("첫번째 값 : %d \n", *(arr + 0));     //배열이 0번부터 시작하는 이유
	printf("첫번째 값 : %d \n", arr[0]);       //줄인말

	printf("두번째 요소 : %p \n", (&*arr) + 1);    //&참조자와 *역참조자는 서로 상쇄된다

	printf("네번째 값 : %d \n", *(arr+3));











	return 0;


}