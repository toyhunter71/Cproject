#include <stdio.h>

int main5() {

	//�ݺ��� while
	//���� 128p

	int num = -1;

	//while (num != -1) {
	//	printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
	//	scanf("%d", &num);
	//	if (num == -1) {
	//		printf("�����մϴ�.");
	//	}
	//	else {
	//		printf("%d��(��) �Է��ϼ̳׿�. \n", num);
	//	}
	//}

	//do ~ while : 1���� ������ �÷��� �ǰԲ� ���ִ�  while ��

	do
	{
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num);
		if (num == -1) {
			printf("�����մϴ�.");
		}
		else {
			printf("%d��(��) �Է��ϼ̳׿�. \n", num);
		}
	} while (num != -1);





	return 0;
}