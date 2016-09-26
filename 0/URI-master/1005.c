#include <stdio.h>

int main(){
	
	float a,b,media;
	
	scanf("%f",&a);
	
		if(a < 0 || a > 10){
			return 0;
		}
		
	scanf("%f",&b);
	
		if(b < 0 || b > 10){
			return 0;
		}
	
	
	media = (a * 3.5 + b * 7.5) / 11;
	
	printf("MEDIA = %.5f\n", media);
}
