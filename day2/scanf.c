#include <stdio.h>

int main1() {

	char str[100];
	int num;
	double dNum;
	char chr;

	printf("������ �Է��ϼ���>>   ");                     //��� printf
	scanf("%d", &num);                                    //�Է� scanf
	printf("\n �Է��� ���� %d �Դϴ�. \n", num);

	printf("\n���ڿ��� �Է��ϼ���>>    ");
	scanf("%s", str);                                     //���ڿ��� & ������� ����
	printf("\n �Է��� ���� %s �Դϴ� \n", str);

	printf("\n�Ǽ��� �Է��ϼ���>>   ");      
	scanf("%lf", &dNum);             
	printf("\n �Է��� ���� %0.2lf �Դϴ�. \n", dNum);

	rewind(stdin);                                        //scanf  ���ڿ� ���׶����� ���� ���� �ʿ�
	printf("\n���ڸ� �Է��ϼ���>>    ");
	scanf("%c", &chr);
	printf("\n �Է��� ���� %c �Դϴ� \n", chr);





	return 0;
}