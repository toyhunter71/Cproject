#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1() {

	//���ǹ� if : ���ǿ� ���� �� ���α׷��� �ٸ��� ���۽��Ѿ��� ��

	int num = 3;

	(num < 3) ? printf("3���� �۽��ϴ�.\n") : printf("3 �̻��Դϴ�.\n");

	//if��
	//if(){}
	//()�ȿ� �ִ� ������ ���� �� {}�� �ִ� �ڵ带 �����ϴ� ����. ���� Ʋ���� {} ����
	if (num < 3) {
		printf("3���� �۽��ϴ�.\n");
	}

	if (num >= 3) {
		printf("3 �̻��Դϴ�.\n"); 
	}

	if (num == 3) {
		printf("3�� �����ϴ�.\n");
	}

	int age = 20;

	if (age >= 20) {
		printf("\n�����Դϴ�.\n");
	}







	return 0;
}