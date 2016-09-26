#include <stdio.h>

int main(void){
	int N, Hora, Min, Seg;
	scanf("%d", &N);
	Hora = N / 3600;
	Min = N % 3600/60;
	Seg = N % 60;
	printf("%d:%d:%d\n", Hora, Min, Seg);
	return 0;
}
