#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;

	// �հ� : 000
	// ��� : 00

	int sum = 0;
	double avg = 0.0;

	sum = kor + eng + math;
	avg = sum / 3.0;

	printf("�հ� : %d\n", sum);
	printf("��� : %0.1lf\n", avg);






	return 0;
}