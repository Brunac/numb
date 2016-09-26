#include <stdio.h>
#include <math.h>

int main(void){

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	if(abs(b - c) < a < b + c && abs(a - c) < b < a + c && abs(a - b) < c < a + b){
		printf("Perimetro = %.1f\n", a + b + c);
	}else{
		printf("Area = %.1f\n", ((a+b)*c) / 2);
	}
return 0;
}
