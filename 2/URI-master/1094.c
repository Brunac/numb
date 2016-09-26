#include <stdio.h>

int main(void) {
	
	long int N, quant, quantt = 0, quantc = 0, quantr = 0, quants = 0;
	double perc, perr, pers;
	char tipo;
	scanf("%d", &N);
	
	while (N > 0) {
		scanf("%d %c", &quant, &tipo);
		quantt += quant;
		switch (tipo) {
			case 'C' :
				quantc += quant;
				break;
			case 'R' :
				quantr += quant;
				break;
			case 'S' :
				quants += quant;
				break;
		}
		N--;
	}
	perc = (quantc * 100.00) / quantt;
	perr = (quantr * 100.00) / quantt;
	pers = (quants * 100.00) / quantt;

 	printf("Total: %d cobaias\n", quantt);
	printf("Total de coelhos: %d\n", quantc);
	printf("Total de ratos: %d\n", quantr);
	printf("Total de sapos: %d\n", quants);
	printf("Percentual de coelhos: %.2f %%\n", perc);
	printf("Percentual de ratos: %.2f %%\n", perr);
	printf("Percentual de sapos: %.2f %%\n", pers);
	
	return 0;
	
}
