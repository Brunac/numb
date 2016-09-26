#include<stdio.h>
int main()
{
    long long int n,sum,i,j;
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        scanf("%lld",&n);
        sum = 0;
        for(i = 1 ; i < n ; i++){
            if(n % i == 0)
                sum = sum + i;
        }
        if( sum == n)
            printf("%lld eh perfeito\n",n);
        else
            printf("%lld nao eh perfeito\n",n);
        }
    return 0;
}

