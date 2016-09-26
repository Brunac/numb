#include <stdio.h>

int main(void) {

	int cod, q;
	double total;
	scanf("%d %d", &cod, &q);
	switch(cod) {
		case 1 :
			total = 4.00 * q;
			printf("Total: R$ %.2f\n", total);
			break;
		case 2 :
			total = 4.50 * q;
			printf("Total: R$ %.2f\n", total);
			break;
		case 3 :
			total = 5.00 * q;
			printf("Total: R$ %.2f\n", total);
			break;
		case 4 :
			total = 2.00 * q;
			printf("Total: R$ %.2f\n", total);
			break;
		case 5 :
			total = 1.50 * q;
			printf("Total: R$ %.2f\n", total);
			break;
		default : 
			printf("Digite o código e a quantidade\n");
	}

	return 0;

}