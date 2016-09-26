#include <stdio.h>
#define V 6
int main(int argc, char const *argv[]) {
  float vetor[V];
  int index , contador;
for (index = 0; index < V; index++) {
  scanf("%f",&vetor[index]);
  if (vetor[index] > 0)
  {
    contador++;
  }
}

  printf("%i valores positivos\n",contador );
  return 0;
}
