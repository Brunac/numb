#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(void) {
	int R;
	double VOL; 
	scanf("%d", &R);
	VOL = (4.0/3.0) * pi * pow(R, 3);
	printf("VOLUME = %.3f\n", VOL);
	return 0;
}
