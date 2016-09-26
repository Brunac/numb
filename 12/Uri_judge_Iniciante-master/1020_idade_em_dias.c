#include <stdio.h>

main () {

	int dias_digitados;
	int dias = 0;
	int meses = 0;
	int anos = 0;
	int acumulador;
	
	scanf("%d", & dias_digitados);
	
		while (dias_digitados >= 365){
			acumulador = dias_digitados - 365;
			dias_digitados = acumulador;
			anos += 1;
			}
		
		while (dias_digitados >= 30){
			acumulador = dias_digitados - 30;
			dias_digitados = acumulador;
			meses += 1;
			}
		while (dias_digitados >= 1){
			acumulador = dias_digitados - 1;
			dias_digitados = acumulador;
			dias += 1;
			}
		printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos, meses, dias);
	return 0;
}

//Accepted
