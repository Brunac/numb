#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2&&a>0&&b>0){
        int sum=0,temp;
        if(b<a){
            temp=a;
            a=b;
            b=temp;
        }
        while(a<=b){
                sum=sum+a;
    printf("%d ",a);
            a++;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
