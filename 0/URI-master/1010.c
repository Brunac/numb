#include <stdio.h>
#include <math.h>

int main(){
	
	int raio;
	float volume;
	
	scanf("%d",&raio);
	
	volume = (4.0/3) * 3.14159 * pow(raio,3);
	
	printf("VOLUME = %.3f\n",volume);
}
