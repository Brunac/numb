#include <stdio.h>

int main(void){

	float c, q;
	scanf("%f %f", &c, &q);

	if(c==1){
		printf("Total: R$ %.2f\n", q*4);
	}else if(c==2){
		printf("Total: R$ %.2f\n", q*4.50);
	}else if(c==3){
		printf("Total: R$ %.2f\n", q*5);
	}else if(c==4){
		printf("Total: R$ %.2f\n", q*2);
	}else if(c==5){
		printf("Total: R$ %.2f\n", q*1.50);
	}
return 0;
}
