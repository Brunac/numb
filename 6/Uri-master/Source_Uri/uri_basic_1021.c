#include <stdio.h>

int main ()
{
  int index ;
  int resultados[12];
  float N ;
  float valores [12] =
    {
      100.00 ,
      50.00 ,
      20.00 ,
      10.00 ,
      5.00 ,
      2.00 ,
      1.00 ,
      0.50 ,
      0.25 ,
      0.10 ,
      0.05 ,
      0.01 ,
    };

  scanf("%f",&N);

  while (valores[index++] >= valores[11]);
    {
      if (index == 0)printf("NOTAS\n");
      if (index == 6) printf ("MOEDAS\n");
      if (index <= 5)
	{
	  resultados[index] = N / valores[index];
	  N = N - (resultados[index] * valores[index]);
	  printf("%i nota(s) de R$ %.2f\n", resultados[index] , valores[index]);
	}
      else
	{
	  resultados[index] = N / valores[index];

	  printf("%i moedas(s) de R$ %.2f\n", resultados[index] , valores[index]);
	  	  N = N - (resultados[index] * valores[index]);
	}
     
    }
  return 0;
}
