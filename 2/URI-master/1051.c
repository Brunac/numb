#include <stdio.h>

int main(void) {

	double salario, ir, ir1, ir2, ir3;
	scanf("%lf", &salario);
	if (salario <= 2000.00) {
		printf("Isento\n");
	} else if (salario > 2000.00 && salario <= 3000.00) {
		salario -= 2000.00;
		ir = 0.08 * salario;
		printf("R$ %.2f\n", ir);
	} else if (salario > 3000.00 && salario <= 4500.00) {
		salario -= 2000.00;
		if (salario > 1000.00) {
			salario -= 1000.00;
			ir1 = 0.08 * 1000.00;
			ir2 = 0.18 * salario;
			ir = ir1 + ir2;
		} else {
			ir1 = 0.08 * salario;
			ir = ir1;
		}
		printf("R$ %.2f\n", ir);
	} else if (salario > 4500.00) {
		salario -= 2000.00;
		ir1 = 0.08 * 1000.00;
		salario -= 1000.00;
		ir2 = 0.18 * 1500.00;
		salario -= 1500.00;
		ir3 = 0.28 * salario;
		ir = ir1 + ir2 + ir3;
		printf("R$ %.2f\n", ir);
	}

	return 0;

}