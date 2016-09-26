#include <stdio.h>

int main() {

	double nota_1, nota_2, nota_3, MEDIA_TOTAL;

    scanf("%lf", & nota_1);
		scanf("%lf", & nota_2);
		scanf("%lf", & nota_3);
     MEDIA_TOTAL = ( ( (( (nota_1 * 2) + (nota_2 * 3)) + (nota_3 * 5)) )/10);
		printf("MEDIA = %.1f\n", MEDIA_TOTAL);

	return 0;
}
//Accepted
