#include <stdio.h>

int main(void) {

	double N;
	int q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0, m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;
	scanf("%lf", &N);
	while (N >= 100) {
		q100 += 1;
		N -= 100.00;
	}
	while (N >= 50) {
		q50 += 1;
		N -= 50.00;
	}
	while (N >= 20) {
		q20 += 1;
		N -= 20.00;
	}
	while (N >= 10) {
		q10 += 1;
		N -= 10.00;
	}
	while (N >= 5) {
		q5 += 1;
		N -= 5.00;
	}
	while (N >= 2) {
		q2 += 1;
		N -= 2.00;
	}
	while (N >= 1) {
		m1 += 1;
		N -= 1.00;
	}
	N *= 10000;
	if (N / 10 != 0) {
		N += 1;
	}
	N /= 100;
	while (N >= 50) {
		m50 += 1;
		N -= 50;
	}
	while (N >= 25) {
		m25 += 1;
		N -= 25;
	}
	while (N >= 10) {
		m10 += 1;
		N -= 10;
	}
	while (N >= 5) {
		m5 += 1;
		N -= 5;
	}
	while (N >= 1) {
		m01 += 1;
		N -= 1;
	}
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", q100);
	printf("%d nota(s) de R$ 50.00\n", q50);
	printf("%d nota(s) de R$ 20.00\n", q20);
	printf("%d nota(s) de R$ 10.00\n", q10);
	printf("%d nota(s) de R$ 5.00\n", q5);
	printf("%d nota(s) de R$ 2.00\n", q2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m01);

	return 0;
}
	