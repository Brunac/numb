#include <stdio.h>
#define indice 10
int main(int argc, char const *argv[]) {
  float vetor[indice];
  int contador =0;
  float resultado;
  while (contador < indice) {
    scanf("%f",&vetor[contador] );
    resultado += vetor[contador]/indice;
    contador++;
  }
  printf("%f\n",resultado);
  return 0;
}
