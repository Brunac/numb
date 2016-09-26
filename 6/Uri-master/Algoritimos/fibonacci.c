#include <stdio.h>

int main(int argc, char const *argv[]) {
  int vetor [47];
  int contador;
  vetor [0] = 1;
  vetor [1] = 1;

  for (contador = 2 ; contador < 47; contador ++)
  {
    vetor[contador] = vetor[contador-1] + vetor[contador-2];
    printf("%i\n",vetor[contador]);
  }
  return 0;
}
