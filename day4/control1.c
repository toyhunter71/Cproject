#include <stdio.h>

int main11() {

	//���
	//���ǹ� : if, switch
	//�ݺ��� : while, for
	//��Ÿ��� : break, continue, goto

	//break : �ݺ��� ������, switch�� ������
	//continue :  �ݺ��� �� ���� ���ư���

	//���� 140p break

	int num;

	while (1) {
		printf("-1 �Է½� ���� : ");
		scanf("%d", &num);

		if (num == -1) {
			break;
			printf("�����ִ� �ڵ�� Dead Code �Դϴ�. \n");
		}
	}

	//���� 141p continue 
	//�ݺ��� 1ȸ�� ���(�ؿ� �ڵ�� ���̻� �������� �ʰ� ���� �ö�, skip)

	for (int n = 1; n <= 5; n++) {
		if (n == 3) {
			continue;                     //���⸦ ������ ()�� �ö�
		}
		printf("%d \n", n);
	}








	return 0;
}