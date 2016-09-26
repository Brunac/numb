#include <stdio.h>

int main(int argc, char const *argv[]) {
  int vetor [10];
  int contador;
  vetor [0] = 1;
  for (contador = 1; contador< 10; contador++) {
    vetor[contador] = vetor[contador-1] * 2;
    printf("%i\n",vetor[contador] );
  }

  return 0;
}
