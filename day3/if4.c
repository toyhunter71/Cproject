#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//���� 122 #2

	/*int num = 0;

	printf("������ �Է��ϼ���  >>>>> ");
	scanf("%d", &num);

	num = num % 2;

	if (num > 0) {
		printf("Ȧ�� �Դϴ�.");
	}
	else {
		printf("¦�� �Դϴ�.");
	}*/

	// #3

	/*int age = 0;

	printf("���̸� �Է��ϼ��� >>>>>>>>   ");
	scanf("%d", &age);

	if (age < 6 || age >= 65) {
		printf("����� 0�� �Դϴ�.");
	}
	else if (age < 13) {
		printf("����� 500�� �Դϴ�.");
	}
	else if (age < 19) {
		printf("����� 900�� �Դϴ�.");
	}
	else {
		printf("����� 1250�� �Դϴ�.");
	}*/

	//if ~ else if ~ else : ���ǹ�

	//���� 123�� #4
	//switch �� �Ǽ� �ʵ�

	//int kor = 88, eng = 90, math = 58, soc = 81, sci = 72;
	//int avg = 0;

	//avg = (kor + eng + math + soc + sci) / 5;
	//printf("������ ����� %d �Դϴ�.\n", avg);

	//avg = avg - (avg % 10);
	//printf("������ ������ %d �Դϴ�.\n", avg);

	////(avg / 10) �� �̿��Ͽ� ���ڸ��� �̿��Ͽ� ���� ����
	////100�� ��쵵 �����ؾ� ��

	//switch (avg) {
	//case 100 :
	//	printf("���� A �Դϴ�.");
	//	break;
	//case 90 :
	//	printf("���� A �Դϴ�.");
	//	break;
	//case 80 :
	//	printf("���� B �Դϴ�.");
	//	break;
	//case 70 :
	//	printf("���� C �Դϴ�.");
	//	break;
	//case 60 :
	//	printf("���� D �Դϴ�.");
	//	break;
	//default:
	//	printf("���� F �Դϴ�.");
	//}

	//���� ���ϴ� ���α׷� �����
	//���� : �⵵�� 4�� ����̸鼭 100�� ����� �ƴ� �⵵ or  400�� ����� �⵵
	//�����̸� 2�� 29�Ϸ� ����
	//�⵵�� �Է��ϸ� �ش� �⵵�� �������� �Ǻ����ִ� ���α׷��� ������

	int year = 0;

	int y400 = 0;
	int y4 = 0;
	int y100 = 0;

	printf("�ش�⵵�� �Է��ϼ��� >>>>>>> ");
	scanf("%d", &year);

	y400 = year % 400;
	y4 = year % 4;
	y100 = year % 100;

	printf("\n");

	if (y400 == 0) {
		printf("%d���� �����Դϴ�.", year);
	}
	else if (y4 == 0 && y100 != 0) {
		printf("%d���� �����Դϴ�.", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.", year);
	}

	printf("\n");





	return 0;

}