#include<stdio.h>
int main()
{
    int A, B, SOMA;
    while( scanf("%d%d", &A, &B) == 2){
        SOMA = A + B;
        printf("SOMA = %d\n", SOMA);
    }
    return 0;
}
