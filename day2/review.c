#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {

	//��� printf
	printf("hello world\n");
	printf("�ּ��� //");

	// // ���� �ּ� ( ������ �ڵ尡 �ƴ϶� �޸�� ��� ctrl+shift+/)  �ڵ� �ּ�

	// /* */ ������ �ּ�  ���� �ּ�

    /*
	   �ȳ��ϼ���
	   �ݰ����ϴ�.
	   ������ �ּ� �Դϴ�

	   ctrl + z : �ڷΰ���
	   ctrl + y : �ڷΰ��� ���
	
	*/

	// ����(variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ����; 
	char word;              //������ ����     1byte
	int  number;            //������ ����     4byte
	double dNumber;         //�Ǽ��� ����     8byte
	char str[256];          //���ڿ��� ����   256 byte

	// ������ ���� ����(���Կ�����)
	// ������ = �����Ͱ�;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	
	sprintf(str,"hi world");

	//���� �ʱ�ȭ(���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;   //numberdp ��� �ִ� ���� ���(�ڷ��� ���� �����ֱ�)

	printf("������: %c\n", word);
	printf("������: %d\n", number);
	printf("�Ǽ���: %lf\n", dNumber);
	printf("���ڿ���: %s\n", str);
	printf("���ڿ���: %s\n", str2);
	
	// +,-,*,/,%

	//% : ������ ���ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� �����

	int n1 = 10, n2 = 20;
	double n3 = 10.0, n4 = 20.0;

	int n5 = n1 + n2;
	int n6 = n1 - n2;
	int n7 = n1 * n2;
	int n8 = n1 / n2;	
	int n9 = n1 % n2;

	printf("������ �� : %d\n", n5);
	printf("������ �� : %d\n", n6);
	printf("������ �� : %d\n", n7);
	printf("������ �� : %d\n", n8);
	printf("������ �� : %d\n", n9);
	
	double n10 = n3 + n4;
	double n11 = n3 - n4;
	double n12 = n3 * n4;
	double n13 = n3 / n4;
	double n14 = n1  % n2;

	printf("�Ǽ��� �� : %0.1lf\n", n10);
	printf("�Ǽ��� �� : %0.1lf\n", n11);
	printf("�Ǽ��� �� : %0.1lf\n", n12);
	printf("�Ǽ��� �� : %0.1lf\n", n13);
	printf("�Ǽ��� �� : %0.1lf\n", n14);
	

	


	return 0;
}