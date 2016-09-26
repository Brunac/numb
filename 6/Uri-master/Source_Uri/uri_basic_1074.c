#include <stdio.h>
void parOuImpar(int numero)
{
	if (numero != 0)
	{
		if(numero % 2 == 0)
		{
			printf("EVEN ");
			if(numero>0)
			{
				printf("POSITIVE\n");
			}
			else
			{
				printf("NEGATIVE\n");
			}
		}
		else
		{
			printf("ODD ");
			if(numero>0)
			{
				printf("POSITIVE\n");
			}
			else
			{
				printf("NEGATIVE\n");
			}
		}
	}
	else
	{
		printf("NULL\n");
	}

}
int main(int argc, char const *argv[])
{
	int N , X;
	int i = 0;
	scanf("%i",&N);

	while(i < N)
	{
		scanf("%i",&X);
		parOuImpar(X);
		i++;
	}
	return 0;
}
