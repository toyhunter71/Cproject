#include <stdio.h>

int main4() {

	//5.�� ������
	//�񱳽��� �����ϸ� �������� 1, Ʋ������ 0 �̶�� �˷���
	// >, <, >=, <=, ==, != (ũ��, �۴�, ũ�ų� ����, �۰ų� ����, ����, �ٸ���)
	int num1 = 10, num2 = 11, num3 = 10;

	printf("== : %d \n", num1 == num2);
	printf("== : %d \n", num1 == num3);

	printf(">  : %d \n", num1 > num2);
	printf("<  : %d \n", num1 < num2);
	printf(">= : %d \n", num1 >= num2);
	printf("<= : %d \n", num1 <= num2);
	printf("!= : %d \n", num1 != num2);

	//6.���� ������
	//&&, ||, ! (and, or, not)
	//&& : and, ������ ��� ������ 1, �ϳ��� Ʋ���� 0
	printf("&& : %d \n", num1 != num2 && num1 == 10);
	printf("&& : %d \n", num1 != num2 && num1 == 11);

	//|| : or, �� �� �ϳ��� ������ 1, �Ѵ� Ʋ������ 0
	printf("|| : %d \n", num1 == num2 || num2 == 11);

	//! : not, 0 �� 1�� �ٲٰ�, 0 �̿��� ���ڴ� 0���� �ٲ�
	//Ʋ���� �µ���, �´� �� Ʋ������ ����
	printf("!  : %d \n", !(num1 == 10));
	printf("!  : %d \n", !(num1 == 11));



	return 0;
}