#include<stdio.h>
int main()
{
    int t, v;
    while(scanf("%d%d",&t,&v)==2){
        double f = (v*t);
        f= f/12;
        printf("%.3lf\n", f);
    }
    return 0;
}
