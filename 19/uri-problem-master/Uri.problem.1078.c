#include<stdio.h>
void main()
{
    int n,i;
    while(scanf("%d",&n)==1&&n>2&&n<1000){
        i=1;
        while(i<=10){
            printf("%d x %d = %d\n",i,n,i*n);
            i++;
        }
    }
}
