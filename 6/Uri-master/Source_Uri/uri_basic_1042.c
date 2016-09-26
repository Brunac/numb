#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a , b , c ;
  int d , e , f;
  int troca;
  scanf("%i%i%i",&a,&b,&c );
  d= a;
  e= b;
  f= c;

  if (a < b)
  {
    troca = a;
    a = b;
    b = troca;
  }
  if(b < c)
  {
    troca = b;
    b = c ;
    c = troca;

  }
  if (a < b)
  {
    troca = a ;
    a = b ;
    b = troca;
  }
  printf("%i\n%i\n%i\n\n%i\n%i\n%i\n",c , b , a , d , e , f );
  return 0;
}
