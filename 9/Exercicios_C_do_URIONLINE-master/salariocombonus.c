//## Ivanoel Rodrigo
//## Salario com Bonus
//## Algoritmo C
#include <stdio.h>
#include <stdlib.h>

int main()
{
char a[300];
double b,c;
scanf("%s %lf %lf",&a,&b,&c);
printf("TOTAL = R$ %.2f\n",b+((c*0.15)*100)/100);
    return 0;
}
