#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;

	// ÇÕ°è : 000
	// Æò±Õ : 00

	int sum = 0;
	double avg = 0.0;

	sum = kor + eng + math;
	avg = sum / 3.0;

	printf("ÇÕ°è : %d\n", sum);
	printf("Æò±Õ : %0.1lf\n", avg);






	return 0;
}