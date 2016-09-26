#include <stdio.h>

int main(int argc, char const *argv[]) {
  int entrada , alcool = 0 , gasolina = 0 , disel = 0;
    while (1)
    {
    scanf("%i",&entrada);
    if (entrada == 4) break;
      else
      {
        if(entrada == 1)alcool++;
        else if(entrada == 2)gasolina++;
        else if(entrada == 3)disel++;
        else continue;
      }
    }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %i\n",alcool);
  printf("Gasolina: %i\n",gasolina);
  printf("Disel: %i\n",disel);
  return 0;
}
