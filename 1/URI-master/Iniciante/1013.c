#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, maior, maiorAB;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	maiorAB = (a+b+abs(a-b))/2;
	
	if(maiorAB == a)
		maior = (a+c+abs(a-c))/2;
	else
		maior = (b+c+abs(b-c))/2;
	
	printf("%d eh o maior\n", maior);
	
	return 0;
}