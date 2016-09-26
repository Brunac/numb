#include <stdio.h> 
#include <math.h>

int main(void){

	double a, b, c, order;
	scanf("%lf %lf %lf", &a, &b, &c);

	if(a < b){
		order = a;
		a = b;
		b = order;
	}
	if (b < c){
		order = b;
		b = c;
		c = order;
	}
	if(a < b){
		order = a;
		a = b;
		b = order;
	}
	if(a >= b + c){
		printf("NAO FORMA TRIANGULO\n");
	}else if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO RETANGULO\n");
	}else if(pow(a, 2) > pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if(pow(a, 2) < pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(a == b && b == c){
		printf("TRIANGULO EQUILATERO\n");
	}else if(a == b || b == c){
		printf("TRIANGULO ISOSCELES\n");
	}
return 0;
}
