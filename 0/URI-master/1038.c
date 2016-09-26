#include <stdio.h>

int main(){
	int codigo, quantidade;
	float valor;
	
	scanf("%d %d", &codigo, &quantidade);
	
	if(codigo == 1){
		valor = quantidade * 4;
	}
	if(codigo == 2){
		valor = quantidade * 4.5;
	}
	if(codigo == 3){
		valor = quantidade * 5;
	}
	if(codigo == 4){
		valor = quantidade * 2;
	}
	if(codigo == 5){
		valor = quantidade * 1.5;
	}
	
	printf("Total: R$ %.2f\n",valor);
	
}
