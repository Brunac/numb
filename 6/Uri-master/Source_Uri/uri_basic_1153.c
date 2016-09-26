#include <stdio.h>
int main(int argc, char const *argv[]) {
  int limite  ,contador;
  int resultado;
  scanf("%i",&limite);
  resultado = limite;
  for(contador = 1 ; contador <= limite-1 ; contador ++)
  {
    resultado *= (limite-contador);
  }
  printf("%i\n",resultado );
  return 0;
}
