#include <stdio.h>
#include <stdlib.h>
void main()
{
  int a, b, auxiliar, i, n;

  a = 0;
  b = 1;

  scanf("%d", &n);
  printf("%d", b);

  for(i = 0; i =< n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    printf("%d", auxiliar);
  }
}
