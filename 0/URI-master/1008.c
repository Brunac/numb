#include <stdio.h>

int main(){
	
	float numero, horas, valor, salario;
	
	scanf("%f",&numero);
	scanf("%f",&horas);
	scanf("%f",&valor);
	
	salario = horas * valor;
	
	printf("NUMBER = %.0f\nSALARY = U$ %.2f\n",numero, salario);
}
