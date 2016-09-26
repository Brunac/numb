#include <stdio.h>
#include <math.h> 

int main(){
	
	float raio, area;
	
	scanf("%f",&raio);
	
	area = 3.14159 * pow(raio,2);
	
	printf("A=%.4f\n", area);
}
