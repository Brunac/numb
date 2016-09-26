#include <stdio.h>

int main(void) {

	int N, q100, q50, q20, q10, q5, q2, q1;
	scanf("%d", &N);
	printf("%d\n", N);
	q100 = N / 100;
	N -= q100 * 100; 
	q50 = (N % 100) / 50;
	N -= q50 * 50;
	q20 = (N % 50) / 20;
	N -= q20 * 20;
	q10 = (N % 20) / 10;
	N -= q10 * 10;
	q5 = (N % 10) / 5;
	N -= q5 * 5;
	q2 = (N % 5) / 2;
	N -= q2 * 2;
	q1 = (N % 2) / 1;
	printf("%d nota(s) de R$ 100,00\n", q100);
	printf("%d nota(s) de R$ 50,00\n", q50);
	printf("%d nota(s) de R$ 20,00\n", q20);
	printf("%d nota(s) de R$ 10,00\n", q10);
	printf("%d nota(s) de R$ 5,00\n", q5);
	printf("%d nota(s) de R$ 2,00\n", q2);
	printf("%d nota(s) de R$ 1,00\n", q1);

	return 0;
}