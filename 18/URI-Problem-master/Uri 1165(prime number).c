#include<stdio.h>
int main()
{
    int tcase,count;
    long int X,i,j;
    scanf("%d",&tcase);

    while(tcase--){
        scanf("%ld",&X);

    i = 1,count = 0;

    while(i <= X){
        if(X % i == 0)
            count++;
            i++;
    }
    if(count == 2)
        printf("%ld eh primo\n",X);

    else
        printf("%ld nao eh primo\n",X);
    }
   return 0;
}
