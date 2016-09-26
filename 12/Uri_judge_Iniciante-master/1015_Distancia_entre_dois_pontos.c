#include <stdio.h>
#include <math.h>

int main(void) { 

	float x1, y1, x2, y2, potencia1, potencia2, total;

		scanf("%f %f", & x1, & y1);
		scanf("%f %f", & x2, & y2);
			potencia1 = (x1-x2);
			potencia1 = pow(potencia1,2);
			potencia2 = (y2-y1);
                        potencia2 = pow(potencia2,2);
			total = sqrt(potencia1 + potencia2);
		printf("%.4f\n", total);
	return 0;

}

//Accepted
