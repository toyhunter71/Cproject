#include<stdio.h>

//�Լ� �Ű������� ����ü�� ���� ����
typedef struct numbers {

	int num1;
	int num2;
	int num3;

} NUM;

//���� 2���� �Է¹޾� ���ļ�  return
int MyFunc2(NUM n) {

	//�Ű������� �ڷ����� �ٲ�ų� ������ �ٲ�� �Ǹ� �Լ��� ����ϴ� �������� �ڵ带 �ٲ�� �Ѵ�
	int result = n.num1 + n.num2 + n.num3;

	return result;
}

int main8() {

	NUM n4 = { 1,2,3 };

	int n1 = 1, n2 = 2, n3 = 3;

	int result = MyFunc2(n4);   

	printf("����� : %d \n", result);

	result = MyFunc2(n4);

	printf("����� : %d \n", result);


	return 0;
}