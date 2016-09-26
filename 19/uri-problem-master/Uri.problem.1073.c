#include<stdio.h>
void main()
{
    int n,i;
    while(scanf("%d",&n)==1){
            i=2;
        while(i<=n){
            printf("%d^2 = %d\n",i,i*i);
            i=i+2;
        }
    }
}
