#include <stdio.h>
#include <stdlib.h>


#define V 3

int main(int argc, char const *argv[]) {
// Declarando vetores
int vetor_a [V] , vetor_b [V] , vetor_resultado[V];
int contador;
int x , y , z ,limite = 0;
//Atribuindo valores aos vetores
printf("Digite os valores do vetor A\n");
  for(contador = 0 ; contador < V ; contador++)
  {
    scanf("%i",&vetor_a[contador]);
  }
printf("Digite os valores do vetor B\n");
  for(contador = 0 ; contador < V ; contador++)
  {
    scanf("%i",&vetor_b[contador]);
  }

  //Percorrendo os vetor
  for(x = 0 ; x < V ; x++)
  {
    for(y = 0 ; y < V ; y++)
    {
      //vericando se o vetor_a ao igual ao vetor_b
      if(vetor_a[x] == vetor_b[y])
      {
        if(x == 0 && y == 0)
        {
          vetor_resultado[limite] = vetor_a[x];
          limite = limite + 1;
        }
      	//percorrendo vetor_a e vetor_resultado
        for(z = 0 ; z < limite ; z++)
        {
        	//Se vetor_a for igual a vetor_resultado sai do lado
          if(vetor_a[x] == vetor_resultado[z])
          {
            z = limite+ 1;
          }
          //se nenhum vetor for igual e estiver na ultima iteracao
          //Vetor resultado recebe vetor a  e adiciona limite em 1 e sai do lado
        }
        if (z == limite)
        {
          vetor_resultado[limite] = vetor_a[x];
          limite = limite + 1;
        }
      }
    }
  }
  for(contador = 0 ; contador < limite ; contador++)
  {
    printf(">%i\n",vetor_resultado[contador]);
  }
return 0;
}
