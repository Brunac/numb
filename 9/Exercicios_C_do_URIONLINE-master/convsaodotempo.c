//## Ivanoel Rodrigo
//## Conversão de tempo
#include <stdio.h>
#include <stdlib.h>

int main()
{
int s,m,h,ts;
scanf("%d",&ts);
h = ts/3600;
m = (ts -(3600*h))/60;
s = (ts - (3600*h)-(m*60));
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
