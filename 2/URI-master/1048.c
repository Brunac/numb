#include <stdio.h>

int main(void) {

	double salario, reajuste;
	int percentual;
	scanf("%lf", &salario);

	if (salario <= 400.00) {
		reajuste = salario * 0.15;
		salario += reajuste;
		percentual = 15; 
	} else if (salario > 400.00 && salario <= 800.00) {
		reajuste = salario * 0.12;
		salario += reajuste;
		percentual = 12;
	} else if (salario > 800.00 && salario <= 1200.00) {
		reajuste = salario * 0.1;
		salario += reajuste;
		percentual = 10;
	} else if (salario > 1200.00 && salario <= 2000.00) {
		reajuste = salario * 0.07;
		salario += reajuste;
		percentual = 7;
	} else if (salario > 2000.00){
		reajuste = salario * 0.04;
		salario += reajuste;
		percentual = 4;
	}
	printf("Novo salario: %.2f\n", salario);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %c\n", percentual, 37);

	return 0;

 }