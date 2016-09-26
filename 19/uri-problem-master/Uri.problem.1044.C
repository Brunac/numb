#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
            if(a>b){
                int temp;
                temp=a;
                a=b;
                b=temp;
            }
        if(b%2==0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    return 0;
}
