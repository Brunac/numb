#include <stdio.h>

int main(){
	
	int tempo, velocidade;
	float resultado;
	
	scanf("%d",&tempo);
	scanf("%d",&velocidade);
	
	resultado = tempo * velocidade / 12.0f;
	
	printf("%.3f\n", resultado);
}
