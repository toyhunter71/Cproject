#include<stdio.h>

int main() {

	//���� 144p
	//#1
	//100 ~ 200 ���� �� 3�� 7�� ����� ����ϴ� ���α׷� �����
	
	for (int i = 100; i <= 200; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n\n");

	//#2
	//2~9 ���� �� �ΰ��� �Է¹޾� �������� ����ϴ� ���α׷�
	//���� 4�� 8�� �Է��ϸ�  4��~8����  ���
	//��, 8�� 4�� �Է��ص� 4��~8���� ���

	int start = 0, end = 0;
	int chg = 0;

	printf("ù��° ���� �Է��ϼ��� >>>>> ");
	scanf("%d", &start);

	printf("�ι�° ���� �Է��ϼ��� >>>>> ");
	scanf("%d", &end);

	if (start > end) {
		chg = end;
		end = start;
		start = chg;
	}

	for (int n1 = 1; n1 < 10; n1++) {
		for (int n2 = start; n2 <= end; n2++) {
			printf("%d X %d = %d\t", n2, n1, n2 * n1);
		}
		printf("\n");
	}
	 






	return 0;
}