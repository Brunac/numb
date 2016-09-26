#include <stdio.h>
#define V 5
int main(int argc, char const *argv[]) {
  int numeros[5];
  int contador = 0;
  int resultado;

  while(contador < V)
  {
    scanf("%i",&numeros[contador]);
    contador++;
  }
  contador = 0;
  while (contador < V)
  {
    resultado = (numeros[contador]% 2 == 0) ? resultado + 1 : resultado;
    contador++;
  }

  printf("%i valores pares\n", resultado);
  return 0;
}
