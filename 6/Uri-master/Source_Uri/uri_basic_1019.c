#include <stdio.h>

int main ()
{
  int N ;

  scanf("%i",&N);
  
  printf("%i:%i:%i\n",N/3600 , (N%3600) / 60 , (N%60) );
  
  return 0;
}
