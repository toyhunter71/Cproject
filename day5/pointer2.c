#include<stdio.h>

int main6() {

	//&(���ۻ�Ʈ) : �ش� ������ �ּҸ� �˷� ��
	//*(�����͸���ũ) : �ش� �ּ��� �������� �̵��� ��
	//�ڷ��� ���� * : ������ ���� ����� ��

	//���� 163p

	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char* cptr = &cnum;
	//int* iptr = &inum;
	//double* dptr = &dnum;

	//printf("%p \n", cptr);
	//printf("%p \n", iptr);
	//printf("%p \n", dptr);


	////������ ���� ������(���� ���)
	//printf("%c \n", *cptr);
	//printf("%d \n", *iptr);
	//printf("%if \n", *dptr);


	//���� 166p

	int num = 10;
	int* pnum;
	pnum = &num;

	*pnum = 20;  //pnum�� �����ϰ� �ִ� �ּҿ� ���� 20�� �־��

	printf("%d \n", num);

	(*pnum)++;
	(*pnum)++;

	printf("%d \n", num);\
	printf("%p \n", &num);
	printf("%p \n", pnum);
	printf("%d \n", *pnum);







	return 0;
}
