#include<stdio.h>
int main()
{
    int x,Alcool = 0,Gasolina = 0,Diesel = 0;
    while(scanf("%d",&x)==1){

        if(x == 1)
            Alcool++;

        else if(x == 2)
            Gasolina++;

        else if(x == 3)
            Diesel++;

        else if(x == 4)
            break;
}
    {
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",Alcool,Gasolina,Diesel);
    }
    return 0;
}
