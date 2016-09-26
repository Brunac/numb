#include <stdio.h>
#include <string.h>

int main(void) {
	
	int N, i, aux = 0, j, count;
	char leds[1110];
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%s", leds);
		count = strlen(leds);
		for(j = 0; j < count; j++) {
			if(leds[j] == '1') {
				aux += 2;
			} else if(leds[j] == '2') {
				aux += 5;
			} else if(leds[j] == '3') {
				aux += 5;
			} else if(leds[j] == '4') {
				aux += 4;
			} else if(leds[j] == '5') {
				aux += 5;
			} else if(leds[j] == '6') {
				aux += 6;
			} else if(leds[j] == '7') {
				aux += 3;
			} else if(leds[j] == '8') {
				aux += 7;
			} else if(leds[j] == '9') {
				aux += 6;
			} else if(leds[j] == '0') {
				aux += 6;
			}
		}
		
		printf("%d leds\n", aux);
		aux = 0;
			
	}
	
	return 0;
	
}
