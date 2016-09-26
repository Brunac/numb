#include <stdio.h>

int main () {

	double r, raio, esfera;
		scanf("%lf", & raio);
		esfera = ((4/3.0) * 3.14159 * (raio * raio * raio));
	printf ("VOLUME = %.3lf\n",esfera);
	return 0;
}

//Accepted
