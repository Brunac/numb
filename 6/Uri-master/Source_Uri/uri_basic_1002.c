#include <stdio.h>
#include <math.h>
int main ()
{
	const double PI = 3.14159;
	double area , radius;
	
	scanf("%lf",&radius);
	
	area = PI * pow(radius,2.0);
	
	printf("A=%.4lf\n",area);
	
	return 0;
}
