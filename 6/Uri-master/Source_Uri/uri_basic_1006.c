#include <stdio.h>

int main ()
{
	//Declarando variaveis 
	double A , B , C , MEDIA;
	const unsigned short 
					peso1 = 2,
					peso2 = 3, 
					peso3 = 5, 
					soma_dos_pesos = peso1 + peso2 + peso3;
	//Pegando valores do usuario
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	//Calculando a media 
	MEDIA = (A*peso1/soma_dos_pesos + B*peso2/soma_dos_pesos + C*peso3/soma_dos_pesos > 10.0) ?
							 10.0 : 
							 A*peso1/soma_dos_pesos + B*peso2/soma_dos_pesos + C*peso3/soma_dos_pesos ;
	
	printf("MEDIA = %.1lf\n",MEDIA);
					
	return 0;					
}
