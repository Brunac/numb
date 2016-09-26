#include<stdio.h>
int main()
{
    int a;
    int al,g,d;
    al=0,g=0,d=0;
        while(scanf("%d",&a)==1&&a!=4){
            if(a==1)
                al=al+1;
            else if(a==2)
                g=g+1;
            else if(a==3)
               d=d+1;
        }
        printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,g,d);
    return 0;
}

