#include <stdio.h>

int main4() {

	//���� 158p
	//#1
	//���̰� 5��  int�� �迭�� �����ϰ� �ʱ�ȭ �Ѵ�. �� �� �� ��Ҵ� ���ϴ� ���� ��´�.
	//�ش� �迭�� ���� ���� ����� ��� �ϱ�

	int nums[5] = { 90,85,76,88,57 };
	int sum = 0;
	double avg = 0;

	for (int i = 0; i < 5; i++) {
		sum += nums[i];
	}

	avg = sum / 5.0;

	printf("�迭�� ���� %d�̰�, ����� %0.2f�Դϴ� \n", sum, avg);

	//#2
	//����ܾ �ϳ� �Է¹޾Ƽ� �������� ����ϴ� ���α׷�

	/*
	�Է°� : hello
	��°� : olleh
	*/

	char str[64] = { '\0', };      //64ĭ�� �����ϸ� 63������ �ִ�
	char chgstr[64] = { '\0', };
	int i = 0;
	int k = 0;
	int l = 0;


	printf("���� �ܾ �Է� �ϼ���  >>>>> ");
	scanf("%s", str);

	for (i = 0;0 < 64; i++) {
		

		if (str[i] == '\0') {
			break;
		}
		k++;
		printf("%d ��° ���ڴ� %c�Դϴ�", i, str[i]);
	}
	
	printf("k�� %d ", k);

	for (int j = k - 1 ; j >= 0; j--) {
		//if (str[j] = '\0') {
		//	continue;
		//}
		
		chgstr[l] = str[j];
		l++;
	}

	printf("���� �ܾ��� ������ %s", chgstr);


	return 0;
}