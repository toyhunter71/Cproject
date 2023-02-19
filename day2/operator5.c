#include <stdio.h>

int main7() {

	//#1
	int age = 0;

	printf("나이를 입력해 주세요 >>>     ");
	scanf_s("%d", &age);

	(age >= 20) ? printf("당신의 나이는 %d세이며, 요금은1250원 입니다!\n", age) : printf("당신의 나이는 %d세이며, 요금은800원 입니다!\n", age);

	//#2
	int age1 = 0;
	double heigth = 0;

	printf("\n나이를 입력해 주세요 >>>     ");
	scanf("%d", &age1);

	printf("키(cm)를 입력해 주세요 >>>     ");
	scanf("%lf", &heigth);

	(age1 >= 12 && heigth > 120.0) ? printf("놀이기구에 탑승할 수 있습니다!\n") : printf("놀이기구에 탑승할 수 없습니다!\n");






	return 0;
}