#include <stdio.h>
#include <stdbool.h>

bool isEven(int number)
{
	if(number % 2 == 0)
	{
		return true;
	}
	return false;
}
bool isPositive(int number)
{
	if(number > 0)
	{
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int i=0 , positive = 0 , negative = 0 , even = 0 , odd = 0 ,X;
	do
	{
		scanf("%i",&X);
		if(isEven(X)) even++;
		else odd++;
		if(isPositive(X) && X != 0) positive++;
		else if(isPositive(X) == false && X != 0) negative++;	
		i++;
	}while(i<5);

	printf("%i valor(es) par(es)\n",even);
	printf("%i valor(es) impar(es)\n",odd);
	printf("%i valor(es) positivo(s)\n",positive);
	printf("%i valor(es) negativo(s)\n",negative);
		
	return 0;
}