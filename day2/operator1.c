#include <stdio.h>

int main2() {

	int num1, num2;

	//num1�� �Է� ����

	printf("num1�� ���� �Է��ϼ��� >>>     ");
	scanf("%d", &num1);                             //���ڴ� &��ȣ�� �����ְ� ���ڿ��� &��ȣ���� �׳� ���´�

	//num2�� �Է� ����
	printf("\nnum2�� ���� �Է��ϼ��� >>>     ");
	scanf("%d", &num2);

	//��� ������(���� ����� ���ִ� ��ȣ)
	printf("%d + %d = %d\n", num1, num2, num1 + num2);	
	printf("%d - %d = %d\n", num1, num2, num1 - num2);	
	printf("%d * %d = %d\n", num1, num2, num1 * num2);	
	printf("%d / %d = %0.2lf\n", num1, num2, num1 / (double)num2);	
	printf("%d�� %d�� ���� ��������  %d\n", num1, num2, num1 % num2);	






	return 0;
}