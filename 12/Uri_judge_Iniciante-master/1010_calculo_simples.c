#include <stdio.h>

int main() {

	int codigo_peca_1, numero_peca_1, codigo_peca_2, numero_peca_2;
	float valor_peca_1, valor_peca_2, total;
		scanf ("%d %d %f", & codigo_peca_1, & numero_peca_1, & valor_peca_1);
		scanf ("%d %d %f", & codigo_peca_2, & numero_peca_2, & valor_peca_2);
			total = ((valor_peca_1 * numero_peca_1) + (valor_peca_2 * numero_peca_2));
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return 0;
}
//Accepted
