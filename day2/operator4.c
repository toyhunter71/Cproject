#include <stdio.h>

int main6() {

	//���� ������
	//���ǿ� ���� �� �ڵ带 �ٸ��� �����ϰ� �ʹ�
	//���� = (�񱳽�) ? �񱳽��� ������ ������ �ڵ� : �񱳽��� Ʋ���� ������ �ڵ�;
	int age = 20;
	(age == 20) ? printf("���̴� 20�� \n") : printf("���̴� 20���� �ƴ� \n");

	//���밪���� ����� �ֱ�(���̳ʽ� ���� �ִٸ� ���ϱ� -1)
	int num, absolute;

	printf("�������� �Է��ϼ��� >>>      ");
	scanf("%d", &num);                           

	//(num > 0) ? absolute = num : absolute = num * -1;  // ������ �ڵ忡 ���� ������ �ʿ��� ��쿡�� �Ʒ��� ���� ��� �Ѵ�.
	absolute = (num > 0) ? num : num * -1;

	printf("���밪 : %d \n", absolute);







	return 0;
}