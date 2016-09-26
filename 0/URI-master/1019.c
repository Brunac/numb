#include <stdio.h>

int main(){
	
	int N, horas = 0, minutos = 0, segundos = 0;

	scanf("%d",&N);
	
	horas = N/3600;
	minutos = (N -(3600*horas))/60;
	segundos = (N -(3600*horas)-(minutos*60));	
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
}
