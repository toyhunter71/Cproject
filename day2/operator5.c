#include <stdio.h>

int main7() {

	//#1
	int age = 0;

	printf("���̸� �Է��� �ּ��� >>>     ");
	scanf_s("%d", &age);

	(age >= 20) ? printf("����� ���̴� %d���̸�, �����1250�� �Դϴ�!\n", age) : printf("����� ���̴� %d���̸�, �����800�� �Դϴ�!\n", age);

	//#2
	int age1 = 0;
	double heigth = 0;

	printf("\n���̸� �Է��� �ּ��� >>>     ");
	scanf("%d", &age1);

	printf("Ű(cm)�� �Է��� �ּ��� >>>     ");
	scanf("%lf", &heigth);

	(age1 >= 12 && heigth > 120.0) ? printf("���̱ⱸ�� ž���� �� �ֽ��ϴ�!\n") : printf("���̱ⱸ�� ž���� �� �����ϴ�!\n");






	return 0;
}