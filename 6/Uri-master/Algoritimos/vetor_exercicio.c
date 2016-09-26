#include <stdio.h>
#define index 10
int main(int argc, char const *argv[]) {
  int numeros[index];
  int contador;
  while (contador < index)
  {
    scanf("%i",&numeros[contador] );
    contador++;
  }
  contador = 0;
  while (contador < index) {
    if (numeros[contador]%2==0)printf("%i\n",contador+1 );
    contador++;
  }

  return 0;
}
