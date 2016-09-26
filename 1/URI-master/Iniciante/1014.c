#include <stdio.h>

int main()
{
	int x;
	float y;
	
	scanf("%i", &x);
	scanf("%f", &y);
	
	printf("%.3f km/l\n", x/y);
	
	return 0;
}