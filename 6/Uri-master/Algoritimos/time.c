#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 6

int main(int argc, char const *argv[]) {
  int v[T], i;
  char c[1];
  srand(time(0));

  do{
    c[0] = 'n';
    for (i = 0 ; i < 6 ; i++)
    {
      v[i] = rand()% 60 + 1;
      printf("%i \n",v[i] );

    }
    printf("Continuar? s ou n\n");
    scanf(" %c",&c[0]);
  }while(c[0] =='s'||c[0] =='S');
    return 0;
  }
