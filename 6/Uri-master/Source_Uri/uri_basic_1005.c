#include <stdio.h>

int main ()
{
	//Criando variaveis 
	const double peso1 = 3.5 , peso2 = 7.5 , soma_dos_pesos = peso1 + peso2;
	double A , B , MEDIA;
	//Lendo valores
	scanf("%lf",&A);
	scanf("%lf",&B);
	//Calcular Media
	MEDIA = (A*peso1/soma_dos_pesos + B*peso2/soma_dos_pesos > 10.0) ? 10.0 : A*peso1/soma_dos_pesos + B*peso2/soma_dos_pesos;
	printf("MEDIA = %.5lf\n",MEDIA);
	
	return 0;
}
