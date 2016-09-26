#include <stdio.h>

int main()
{
	int number, horas;
	float dolar, salary;
	
	scanf("%d", &number);
	scanf("%d", &horas);
	scanf("%f", &dolar);
	
	salary = dolar*horas;
	
	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2f\n", salary);
	
	return 0;
}