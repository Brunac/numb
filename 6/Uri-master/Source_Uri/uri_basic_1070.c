#include <stdio.h>

#define CONS 6

int main(int argc, char const *argv[]) {
  int x , limite;

  scanf("%i",&x);

  limite = x + 12;
  x++;
  while(x <= limite)
  {
    if(x%2 == 1)
    {
      printf("%i\n",x);
    }
    x++;
  }

  return 0;
}
