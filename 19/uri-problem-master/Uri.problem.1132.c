#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)==2){
        if(y<x){
            int temp;
            temp=x;
            x=y;
            y=temp;
        }
        int sum=0;
        while(x<=y){
            if(x%13!=0)
                sum=sum+x;
            x++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
