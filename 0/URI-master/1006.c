#include <stdio.h>

int main(){
	
	float a,b,c,media;
	
	scanf("%f",&a);
	
		if(a < 0 || a > 10){
			return 0;
		}
		
	scanf("%f",&b);
	
		if(b < 0 || b > 10){
			return 0;
		}
	
	scanf("%f",&c);
	
		if(c < 0 || c > 10){
			return 0;
		}
	
	
	media = (a * 2 + b * 3 + c * 5) / 10;
	
	printf("MEDIA = %.1f\n", media);
}
