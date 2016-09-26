#include <stdio.h>

int main(void){

	int a, b, x, y;
	scanf("%d %d", &a, &b);
	x = a%b;
	y = b%a;

	if(x == 0 || y == 0){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
return 0;
}
