#include<stdio.h>
int main()
{
     int a,b,c,d,e,f;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)==5){
        int sum=0;
        if(a%2==0)
            sum=sum+1;
        else
            sum = sum+0;
         if(b%2==0)
            sum=sum+1;
        else
            sum = sum+0;
         if(c%2==0)
            sum=sum+1;
        else
            sum = sum+0;
         if(d%2==0)
            sum=sum+1;
        else
            sum = sum+0;
         if(e%2==0)
            sum=sum+1;
        else
            sum = sum+0;
        printf("%d valores pares\n",sum);
    }
    return 0;
}
