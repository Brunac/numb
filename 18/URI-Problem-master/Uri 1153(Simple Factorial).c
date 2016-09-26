#include<stdio.h>
long long int factorial(long long int N)
{
    if(N<=1)
        return 1;
    else
        return (N*factorial(N-1));
}
int main()
{
    long long int a;
    scanf("%lld",&a);
    printf("%lld\n",factorial(a));
    return 0;
}
