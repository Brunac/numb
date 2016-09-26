#include <stdio.h>


int main(void) {

	int id, ht;
	double porhora, salario;
	scanf("%d", &id);
	scanf("%d", &ht);
	scanf("%lf", &porhora);
	salario = ht * porhora;
	printf("NUMBER = %d\n", id);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;

}