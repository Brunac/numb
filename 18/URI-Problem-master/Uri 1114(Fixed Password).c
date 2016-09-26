#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)==1){

        if(x != 2002)
        printf("Senha Invalida\n");

        else if(x == 2002){
            printf("Acesso Permitido\n");
        break;
        }
    }
    return 0;
}
