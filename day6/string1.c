#include<stdio.h>
#include<string.h>


//<stdio.h> : �Է� �� ��� ���� ��ɵ��� ����
//<string.h> : ���ڿ� ���� ���(�Լ�)���� ����
int main2() {

	//���� 201p

	char good[] = "Good!";      //6ĭ
	char* bad = "Bad!";         //5ĭ    �������� ����!


	printf("%s %s \n", good, bad);

	//�迭�� ���� ���ڿ�
	//good = "New Good!"           //�����Ͽ���(�迭���ڿ��� �ϰ����� �Ұ���)  <--- ó�� 6ĭ���� ����
	good[0] = 'H';

	//�����ͷ� ���� ���ڿ�
	bad = "New bad!";
	bad[0] = 'S';                //������ ���ڿ����� �������� �Ұ��� (����)
	 
	printf("%s %s \n", good, bad);

	//���� 205p

	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	char str4[40];


	int str1_len = strlen(str1);      //������ ������ �˷��� (������ null ����)
	int str2_len = strlen(str2);

	printf("str1�� ���� : %d, str2�� ���� : %d \n", str1_len, str2_len);

	//���ڿ� ����
	strcpy(str3, str1);

	printf("%s \n", str3);

	//���ϴ� ������ ����
	strncpy(str4, str1, 5);    //5���ڸ� ����

	printf("%s \n", str4);

	//sprintf : printf ���·� ���ڿ� ����
	sprintf(str4, "���� ���ϴ� ���ڿ� : %s", str1);

	printf("%s \n", str4);

	//���� 207p
	char str5[50] = "Michael ";
	char str6[50] = "Michael ";

	//���ڿ� �̾� ���̱� strcat
	strcat(str5, "Bolton");
	printf("%s \n", str5);

	strncat(str6, "Jackson Five", 7);
	printf("%s \n", str6);

	//strcmp : �� ���ڿ��� ��(���ڿ��� ==�� �ʵ�), ���ٸ� 0  �̶�� �˷� ��(��ȯ)
	if (strcmp("�ȳ�", "�ȳ�12") == 0) {
		printf("���� \n");
	}
	else {
		printf("�ٸ��� \n");
	}

	//str5�� str6�� ��
	printf("�� ��� : %d \n", strcmp(str5, str6));

	//str5�� str6�� 7���ڸ� ��
	printf("�� ��� : %d \n", strncmp(str5, str6, 7));

	printf("str6�� �Է� >>>>>> ");
	scanf("%[^\n]s", str6);
	printf("�� ��� : %d \n", strcmp(str5, str6));


	return 0;
}