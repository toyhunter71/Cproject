#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//page101 #3, #4, #5

	//#3
	//�ٱ��Ͽ� �����Ƹ� 10���� ���� �� �ִ�
	//������ ������ ����ڷκ��� �Է¹ް� ���� �������
	//���� ���, ������ 16���� �Է¹����� �ٱ��� 2���� �ʿ�
	//������ 157���� �Է¹����� �ٱ��� 16���� �ʿ�

	int peach = 0;
	int basket = 0;

	printf("�������� ������ : ");
	scanf("%d", &peach);

	basket = peach / 10;
	peach % 10 > 0 ? basket++ : basket;

	printf("�ʿ��� �ٱ����� �� : %d\n", basket);


	//#4
	//����ڷκ��� �Ǽ��� ������ ���� �Է¹ް� 1�� �ڸ� ���ڸ� ����ϴ� ���α׷� �����
	//���� ���, 126.12 ===> 6  / 33.14  ==>  3

	double num = 0.0;
	int rNum = 0;

	printf("\nNUM : ");
	scanf("%lf", &num);

	rNum = (int)num % 10;

	printf("1�� �ڸ� ���ڴ� %d �Դϴ�\n", rNum);


	//#5
	//����ڷκ��� ��(second)�� �Է¹޾� [��,��,��] ���·� ��ȯ�� ������
	//���� ���, 3665  ==> 1�ð� 1�� 6��

	int second = 0;
	int hour = 0, min = 0, sec = 0;

	printf("\n�ʸ� �Է��ϼ��� : ");
	scanf("%d", &second);

	hour = second / 3600;
	min = (second - (3600 * hour)) / 60;
	sec = second - (3600 * hour + 60 * min);

	printf("�ð��� %d�ð� %d�� %d�� �Դϴ�!\n", hour, min, sec);






	return 0;
}