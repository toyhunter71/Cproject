#include<stdio.h>
#include<string.h>

int main3() {

	//���� 209p 
	// #1
	//�� ���� ���ڿ��� �Է¹޾� ������ �ٸ��� �˷��ִ� ���α׷� "%[^\n]s"
	char str1[50] = {0,};
	char str2[50] = {0,};

	printf("ù��° ���ڿ��� �Է� �ϼ��� >>> ");
	scanf("%[^\n]s", str1);

	rewind(stdin);    //���� ���� (�����Ⱚ ó��)

	printf("\n�ι�° ���ڿ��� �Է� �ϼ��� >>> ");
	scanf("%[^\n]s", str2);

	if (strcmp(str1, str2) == 0) {
		printf("�Էµ� �� ���ڿ��� �����ϴ�! \n");
	}
	else {
		printf("�Էµ� �� ���ڿ��� �ٸ��ϴ�! \n");
	}

	//#2
	//�� �Է¹��� ���ڿ� �� ���̰� �� ���ڿ����� ����ϰ� �� �ּ���

	int str1_len = strlen(str1);
	int str2_len = strlen(str2);

	if (str1_len > str2_len) {
		printf("%s %s", str1, str2);
	}
	else {
		printf("%s %s", str2, str1);
	}

	return 0;

}