#include<stdio.h>
void main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        int sum=0,temp;
        if(b<a){
            temp=a;
            a=b;
            b=temp;
        }
        a=a+1;
        while(a<b){
            if(a%2!=0){
                sum=sum+a;
            }
            a++;
        }
        printf("%d\n",sum);
    }
}
