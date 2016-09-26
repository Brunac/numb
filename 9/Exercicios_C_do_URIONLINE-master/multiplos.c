//## Ivanoel Rodrigo
//## Múltiplos
//## Algoritmo C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
        scanf("%d %d",&a,&b);

       if(a%3==0 && b%3==0 || a%5==0 && b%5==0){
            printf("Sao Multiplos\n");
      }
        else{
            printf("Nao sao Multiplos\n");
    }
    return 0;
}
