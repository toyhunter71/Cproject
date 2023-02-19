#include <stdio.h>

int main1() {

	char str[100];
	int num;
	double dNum;
	char chr;

	printf("정수를 입력하세요>>   ");                     //출력 printf
	scanf("%d", &num);                                    //입력 scanf
	printf("\n 입력한 값은 %d 입니다. \n", num);

	printf("\n문자열을 입력하세요>>    ");
	scanf("%s", str);                                     //문자열은 & 사용하지 않음
	printf("\n 입력한 값은 %s 입니다 \n", str);

	printf("\n실수를 입력하세요>>   ");      
	scanf("%lf", &dNum);             
	printf("\n 입력한 값은 %0.2lf 입니다. \n", dNum);

	rewind(stdin);                                        //scanf  문자열 버그때문에 버퍼 비우기 필요
	printf("\n문자를 입력하세요>>    ");
	scanf("%c", &chr);
	printf("\n 입력한 값은 %c 입니다 \n", chr);





	return 0;
}