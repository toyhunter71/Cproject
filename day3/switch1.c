#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main5() {

	//if ~ else if ~ else
	//switch ~ case ~ break
	//switch�� : ���� ���� ã�� �� ����ϴ� ���ǹ�

	//if�� : ���� ����, ��ġ/����ġ ����(>, ==)
	//switch �� : ��ġ���� (==)

	char word = 'a';

	//����� �Ǵ� ������ ()�� ���´�
	switch (word) {
	case 'a':
		printf("�ܾ�� a �Դϴ�");
		break;                       //case�� ������  break
	case 'b':
		printf("�ܾ�� b �Դϴ�");
		break;
	case 'c':
		printf("�ܾ�� c �Դϴ�");
		break; 
	default:                         //��ġ�ϴ�  case�� ����
		printf("��ġ�ϴ� �ܾ �����ϴ�.");
	}

	printf("\n\n");
	//switch : ()��ġ�ϴ� �ָ� ã��

	int num = 0;

	printf("��ȣ�� �����ϼ���  >>>>>> ");
	scanf("%d", &num);

	printf("\n");

	switch (num) {
	case 1:
		printf("1�� �����߽��ϴ�.");
		break;
	case 2:
		printf("2�� �����߽��ϴ�.");
		break;
	case 3:
		printf("3�� �����߽��ϴ�.");
		break;
	case 4:
		printf("4�� �����߽��ϴ�.");
		break;
	default:
		printf("������ ���� �˼� �����ϴ�.");
	}

	printf("\n");




	return 0;


}