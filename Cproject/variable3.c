#include <stdio.h>

int main4() {

	//�̸�, �⵵, ��, ��,  f =======> ���� ��� ó��
	//���ڿ�[] ���� : �̸�
	//���� ���� : �⵵, ��, ��
	//���ں��� : f

	char name[] = "ȫ�浿";

	int year = 2023;
	int month = 2;
	// char month[] = "02";
	int day = 18;

	char func = 'f';

	printf("�ۼ��� : %s\n", name);
	printf("�ۼ����� : %d-%02d-%d\n", year, month, day);
	printf("��� : print%c�� ���ڿ� ���\n\n", func);

	printf("�ۼ��� : ȫ�浿\n");
	printf("�ۼ����� : 2023-02-18\n");
	printf("��� : printf�� ���ڿ� ���\n");


	return 0;
}