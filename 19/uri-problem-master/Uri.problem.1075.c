#include<stdio.h>
void main()
{
    int n;
    while(scanf("%d",&n)==1){
        int r=0;
        while(r<10000){
            printf("%d\n",r+2);
            r=r+n;
        }
    }
}
