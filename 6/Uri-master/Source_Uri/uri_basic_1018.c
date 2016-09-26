#include <stdio.h>

int main ()
{
  int N , index = 0;
  int valorNotas [7] = { 100 , 50 , 20 , 10 , 5 , 2 , 1 };

  scanf("%i",&N);

  printf("%i\n",N);
      do {

	printf("%i nota(s) de R$ %i,00\n",N / valorNotas[index] , valorNotas[index]);
	N = N - valorNotas[index] * (N /valorNotas[index]);
      }while(valorNotas[index++] != 1);
  return 0;
}
