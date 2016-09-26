#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)==6){
        int sum=0;
        double av;
        if(a>=0)
            sum=sum+1;
        else
            a=0;
            sum = sum+0;
         if(b>=0)
            sum=sum+1;
        else
            b=0;
            sum = sum+0;
         if(c>=0)
            sum=sum+1;
        else
            c=0;
            sum = sum+0;
         if(d>=0)
            sum=sum+1;
        else
            d=0;
            sum = sum+0;
         if(e>=0)
            sum=sum+1;
        else
            e=0;
            sum = sum+0;
         if(f>=0)
            sum=sum+1;
        else
            f=0;
            sum = sum+0;
        printf("%d valores positivos\n",sum);
        av=a+b+c+d+e+f;
        av=av/sum;
        printf("%.1lf\n",av);
    }
    return 0;
}

