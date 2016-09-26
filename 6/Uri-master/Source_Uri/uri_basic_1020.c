#include <stdio.h>

int main ()
{
  int dias;

  scanf("%i",&dias);

  printf("%i ano(s)\n",dias / 365);
  printf("%i mes(es)\n",(dias%365)/30);
  printf("%i dia(s)\n",((dias%365)%30));
  return 0;
}
