#include <stdio.h>

int main(int argc, char const *argv[]) {
  int valor_final , i = 0;

  scanf("%i",&valor_final);

  while (i <= valor_final)
  {
    if (i%2==1)
    {
      printf("%i\n",i);
    }
    i++;
  }
  return 0;
}
