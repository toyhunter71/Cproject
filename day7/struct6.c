#include<stdio.h>
#include<string.h>

typedef struct worker {

	char* �̸�;                //������
	char* ��ȭ��ȣ;
	int ����;
} WORKER;

typedef struct worker1 {

	char �̸�[50];                
	char ��ȭ��ȣ[14];
	int ����;
} WORKER1;

int main6() {

	//���� 295p (2)
	//����ü worker�� ����� ������ WORKER�� �ο�
	//������� : �̸�(char*), ��ȭ��ȣ(char*), ����(int)

	WORKER1 ���[3] = {                                      //�迭 ó��
		{"���ӽ�","010-1111-2222", 3000000},
		{"�ص�","010-3333-4444", 4000000},
		{"�׸�","010-5555-6666", 5000000}
	};

	//for (int i = 0; i < 3; i++) {
	for (int i = 0; i < sizeof(���)/sizeof(WORKER1); i++) {
		printf("%s�� ��ȭ��ȣ�� %s�̰� ������ %d�� �Դϴ� \n", ���[i].�̸�, ���[i].��ȭ��ȣ, ���[i].����);
	}

	//����ü ���(3��¥�� �迭)









	return 0;
}