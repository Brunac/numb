#include <stdio.h>

int main () {

	int valor, fixo, acumulador;
	int contador100 = 0;
	int contador50 = 0;
	int contador20 = 0;
	int contador10 = 0;
	int contador5 =  0;
	int contador2 = 0;
	int contador1 = 0;

		scanf("%d", & valor);
			
		fixo = valor;
			while (valor >= 100) {
				acumulador = valor - 100;
				valor = acumulador;
				contador100 += 1;
		
}
    			
			while (valor >= 50) {
				acumulador = valor - 50;
		               	valor = acumulador;
				contador50 += 1;
}
    			
			while (valor >= 20) {
				acumulador = valor - 20;
				valor = acumulador;
				contador20 += 1;
}

			while (valor >= 10) {
				acumulador = valor - 10;
			       	valor = acumulador;
				contador10 += 1;

}
			while (valor >= 5) {
				acumulador = valor - 5;
				valor = acumulador;
				contador5 += 1;

}

    			
			while (valor >= 2) {
				acumulador = valor - 2;
		               	valor = acumulador;
				contador2 += 1;

}		
			while (valor >= 1) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador1 += 1;
}
		printf ("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",fixo, contador100, contador50, contador20, contador10, contador5, contador2, contador1);	
	return 0;
}

//Accepted
