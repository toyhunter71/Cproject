#include<stdio.h>

int main7() {

	//���� 168~170p

	//#1
	int a = 10;      //���� a�� 10 ��Ƽ� �����
	int* p = &a;     //������ ���� p�� a�� �ּҸ� ��� �����

	*p = 20;         //�������ؼ� 20 �����ϱ� a dp 20 ����
	printf("%d", a);

	*p = 50;
	printf("%d", a);
	
	//#2
	printf("\n");

	//���� 10�� �����ϴ� int�� ���� number�� ���� �� �ʱ�ȭ�ϰ�
	//number�� �����  �޸� �ּҸ� �����ϴ� ������ ���� pnumber�� �����մϴ�.
	int number = 10;
	int* pnumber = &number;

	printf("%d / %p \n", *pnumber,pnumber);

	//#3 �ڵ� �ϼ��ϱ�
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;

	printf("%d \n", *ptr);

	ptr = &num2;

	printf("%d \n", *ptr);

	//#4 �ڵ� �ϼ��ϱ�
	int n1 = 100, n2 = 200;
	int *ptr1 = &n1, *ptr2 = &n2;
	printf("%d %d \n", *ptr1, *ptr2);

	ptr1 = &n2;
	ptr2 = &n1;

	printf("%d %d \n", *ptr1, *ptr2);















	return 0;
}