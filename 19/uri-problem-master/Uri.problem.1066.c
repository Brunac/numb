#include<stdio.h>
void main()
{
    int a,e=0,o=0,p=0,n=0,i;
    for(i=0;i<5;i++){
        scanf("%d",&a);
        if(a%2==0)
            e++;
        else
            o++;
        if(a>0)
            p++;
        if(a<0)
            n++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);
}
