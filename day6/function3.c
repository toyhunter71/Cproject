#include<stdio.h>

//���� 2���� ���޹޾� �� ū ������ ��ȯ
int getBigger(int n1, int n2) {

	if( n1 > n2 ){
		return n1;
	}
	else if (n2 > n1) {
		return n2;
	}
	else {
		return 0;
	}
}

//#1  --> void
int* Calc(int n1, int n2) {

	static int calc[4] = { 0, };

	calc[0] = n1 + n2;
	calc[1] = n1 - n2;
	calc[2] = n1 * n2;
	calc[3] = n1 / n2;

	return calc;
}

//#2
int Calc1(int n1, int n2) {

	int sum = 0;

	for (int i = n1 + 1; i < n2; i++) {
		sum += i;
	}

	return sum;
}

//#3
int Calc2(int n1) {

	int plus_200 = 0;
	int cnt = 0;

	plus_200 = n1 + 200;

	for (int i = n1; i <= plus_200; i++) {
		if (i % 7 == 0) {
			cnt++;
		}
	}
	return cnt;
}

double Calc3(int n1) {

	double heigth = 0.0;

	heigth = n1 / 100.0;

	return heigth;
}

void Calc4(int n1) {

	int hour = n1 / 3600;
	int min = (n1 % 3600) / 10;
	int sec = (n1 % 3600) % 10;

	printf("\n�ð��� %d�ð�%d��%d�� �Դϴ�", hour, min, sec);
}
 

int main() {

	//���� 228p

	//int result;

	//result = getBigger(3,5);
	//printf("ù��° ��� : %d \n", result);

	//result = getBigger(8,2);
	//printf("�ι�° ��� : %d \n", result);

	//result = getBigger(4,4);
	//printf("����° ��� : %d \n", result);

	//���� 237p

	//#1
	//�� ���� ������ �Ű� ������ �Է� �޾� �������� ����, ����, ������, ���� ����� ��� ����ϴ� �Խ� ����

	int* result = Calc(4, 2);
	int sum = 0;
	int cnt = 0;
	int heigth = 0;
	double dHeigth = 0.0;

	printf("#1-----------------------------------");

	printf("\n�� ���� ������ %d �Դϴ�", *(result+0));
	printf("\n�� ���� ������ %d �Դϴ�", *(result+1));
	printf("\n�� ���� ������ %d �Դϴ�", *(result+2));
	printf("\n�� ���� �������� %d �Դϴ�", *(result+3));



	//#2
	//�� ������ �Ű� ������ �޾� �� ���� ������ ��� ������ ����  ��ȯ�ϴ� �Լ� ����

	printf("\n#2-----------------------------------");

	sum = Calc1(5, 9);
	printf("\n������ : %d", sum);
	

	//#3

	printf("\n#3-----------------------------------");

	cnt = Calc2(100);
	printf("\n����� ���� : %d", cnt);

	//#4

	printf("\n#4-----------------------------------");

	printf("\nŰ�� �Է��� �ּ���(cm) >>>> ");
	scanf("%d", &heigth);

	dHeigth = Calc3(heigth);
	printf("����� Ű�� %0.2fm �Դϴ�", dHeigth);

	//#5

	printf("\n#5-----------------------------------");

	Calc4(3665);



	return 0;
}
