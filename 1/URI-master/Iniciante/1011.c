#include <stdio.h>

int main()
{
	int raio;
	double volume, pi = 3.14159;
	
	scanf("%d", &raio);
	
	volume = (4.0/3)*pi*raio*raio*raio;
	
	printf("VOLUME = %.3f\n", volume);
	
	return 0;
}