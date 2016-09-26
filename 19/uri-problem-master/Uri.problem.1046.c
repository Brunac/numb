#include<stdio.h>
void main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        if(a==b)
            printf("O JOGO DUROU 24 HORA(S)\n");
        else if(a>b){
            a=24-a+b;
            printf("O JOGO DUROU %d HORA(S)\n",a);
        }
        else
            printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
}
