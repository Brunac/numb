#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	int A, B, C, MaiorA, MaiorB;
	scanf("%d %d %d", &A, &B, &C);
	MaiorA = (A + B + abs(A - B))/2;
	MaiorB = (MaiorA + C + abs(MaiorA - C))/2;
	printf("%d eh o maior\n", MaiorB);
	return 0;
}
