#include<stdio.h>
int main()
{
    int a,b,N;

    scanf("%d",&N);

    for(a=1;a<=N;a=a+1){

        if(a%2==0)
        printf("%d^2 = %d\n",a,a*a);
    }
    return 0;
}
