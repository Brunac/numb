#include <stdio.h>
#define V 6
int main(int argc, char const *argv[]) {
  int contador = 0 , valoresPositivos = 0 ;
  float valores [V] , media;

  while (contador < V)
  {
    scanf("%f",&valores[contador] );
    if(valores[contador]>0)
    {
      valoresPositivos += 1 ;
      media += valores[contador];

    }
    contador++;
  }
  media = media/valoresPositivos;
  printf("%i valores positivos\n%.1f\n",valoresPositivos , media );
  return 0;
}
