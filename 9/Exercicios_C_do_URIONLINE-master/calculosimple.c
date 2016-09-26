//## Ivanoel Rodrigo
//## Calculo Simples
//## Algoritmo C
#include <stdio.h>
#include <stdlib.h>
int main(){
int cod1,cod2,pc1,pc2;
double vu1,vu2;
scanf("%d %d %lf %d %d %lf",&cod1,&pc1,&vu1,&cod2,&pc2,&vu2);
printf("VALOR A PAGAR: R$ %.2lf\n",(pc1*vu1+pc2*vu2));
return 0;
}
