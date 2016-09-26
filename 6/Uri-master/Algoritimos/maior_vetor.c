#include <stdio.h>
#define V 10
int main(int argc, char const *argv[]) {
  int vetor[V];
  int pm , index =0;

  while (index < V) {
    printf("Digite um numero\n");
    scanf("%i",&vetor[index]);
    index++;
  }
  pm = 0;
  index = 1;
  while (index < V) {
    if (vetor[index] > vetor[pm])
    {
      pm = index;
    }
    index ++;
  }
  printf("%i\n",pm );
  return 0;
}
