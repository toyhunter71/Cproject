#include<stdio.h>

int main3() {

	//���� 152p

	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };

	//�迭�� ���� ��� �ʱ�ȭ

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	//���� ��� ���� �� ���
	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	//for ���� ���� �迭 ��� ���
	for (i = 0; i < 5; i++) {
		printf("%d \n", even[i]);
	}

	printf("\n");


	//���� 156p

	char mind[30] = "I Love programing!";

	printf("%s \n", mind);

	mind[9] = '\0';        //8��° ��ҷ�  null ���� ����

	printf("%s \n", mind);

	mind[1] = '\0';

	printf("%s \n", mind);


	char str[50] = { 0, };       //50ĭ ��� null ���ڷ� �ʱ�ȭ

	printf("���ڿ��� �Է��ϼ��� >>>>> ");
	scanf("%s", str);           //���ڿ��� &��ȣ�� �ʿ� ���� (������ �ʿ�)

	printf(" �Էµ� ���ڿ��� : %s \n", str);















	return 0;
}