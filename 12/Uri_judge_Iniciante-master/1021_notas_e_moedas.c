#include <stdio.h>

int main () {

	double valor;
	float acumulador, contador100, contador50, contador20, contador10, contador5, contador2, contador1, contador0_50, contador0_25, contador0_10, contador0_05, contador0_01;
		scanf("%lf", & valor);

			for (contador100 = 0; valor >= 100.0; contador100 ++) {
				acumulador = valor - 100.0;
				valor = acumulador;
				
				}
			for (contador50 = 0; valor >= 50.0; contador50 ++) {
				acumulador = valor - 50.0;
               			valor = acumulador;

				}
			for (contador20 = 0; valor >= 20.0; contador20 ++) {
				acumulador = valor - 20.0;
				valor = acumulador;
				
				}
			for (contador10 = 0; valor >= 10.0; contador10 ++) {
				acumulador = valor - 10.0;
				valor = acumulador;
				
				}
			for (contador5 = 0; valor >= 5.0; contador5 ++) {
				acumulador = valor - 5.0;
				valor = acumulador;

				}
			for (contador2 = 0; valor >= 2.0; contador2 ++) {
				acumulador = valor - 2.0;
		      	
				}
			for (contador1 = 0; valor >= 1.0; contador1 ++) {
				acumulador = valor - 1.0;
				valor = acumulador;
				
				}
			for (contador0_50 = 0; valor >= 0.50; contador0_50 ++) {
				acumulador = valor - 0.50;
				valor = acumulador;
				
				}
			for (contador0_25 = 0; valor >= 0.25; contador0_25 ++) {
				acumulador = valor - 0.25;
				valor = acumulador;
				
				}
			for (contador0_10 = 0; valor >= 0.10; contador0_10 ++) {
				acumulador = valor - 0.10;
				valor = acumulador;
				
				}
			for (contador0_05 = 0; valor >= 0.05; contador0_05 ++) {
				acumulador = valor - 0.05;
		    		valor = acumulador;
				
				}
			for (contador0_01 = 0; valor >= 0.01; contador0_01 ++) {
				acumulador = valor - 0.01;
		    		valor = acumulador;
				
				}
		printf ("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d MOEDAS(s) de R$ 1.00\n%d MOEDAS(s) de R$ 0.50\n%d MOEDAS(s) de R$ 0.25\n%d MOEDAS(s) de R$ 0.10\n%d MOEDAS(s) de R$ 0.05\n%d MOEDAS(s) de R$ 0.01\n", contador100, contador50, contador20, contador10, contador5, contador2, contador1, contador0_50, contador0_25, contador0_10, contador0_05, contador0_01);	
	return 0;
}

//Time limit exceeded
