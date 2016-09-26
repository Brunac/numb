//## Ivanoel Rodrigo
//## Cédulas
//## Algoritmo
#include <stdio.h>
#include <stdlib.h>
int main(){
int cedulas[] = {100,50,20,10,5,2,1};
int n, t = 0;
scanf("%d", &n);
printf("%d\n", n);
do{
printf("%d nota(s) de R$ %d,00\n", n / cedulas[t], cedulas[t]);
if (n >= cedulas[t])
n -= cedulas[t] * (n / cedulas[t]);
} while(cedulas[t++] != 1);
    return 0;
}
