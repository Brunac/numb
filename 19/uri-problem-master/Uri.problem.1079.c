#include<stdio.h>
int main()
{
    int t;
    double a,b,c,s;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf",&a,&b,&c);
        a=a*2;
        b=b*3;
        c=c*5;
        s=(a+b+c)/10;
        printf("%.1lf\n",s);
    }
    return 0;
}
