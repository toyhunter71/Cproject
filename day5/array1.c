#include<stdio.h>

int main1() {

	//�迭 : �������� 1���� ���ĳ��� ��
	char s;                //����
	char str[10];          //���� �迭(���ڿ�) 10��

	int num;               //�������� 1��
	int numbers[100];      //�������� 100�� �迭

	//�迭��� ���� 1. �������� 10���� ������� �Ѵ�
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;     //�Ϲ� ����
	int nn[10];                                      //�迭

	//�迭��� ���� 2. �ݺ��� ����� ���ؼ�(�Ϲ� �������� �ݺ���ó���� �Ұ���)
	//�Ϲݺ����� �ѹ��� ��� �Ұ���
	//�迭�� �ٿ����� ù��° ������ �������� �ϰ� ��� ����

	int nums[10] = {1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d", nums[i]);   //�迭�� 0������ ����(*nums+i)
	}
	 
	printf("\n %d \n", nums[0]);  //0������ ù��° ��
	printf("\n %d \n", nums[9]);  //9������ ����° ��

	//�迭 : []�� ���ؼ� ������ �ٿ� ����






	return 0;
}