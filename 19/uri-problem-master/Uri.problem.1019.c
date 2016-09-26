#include<stdio.h>
int main()
{
    int t,h,m;
    while(scanf("%d",&t)==1){
        h=t/3600;
        t=t%3600;
        m=t/60;
        t=t%60;
        printf("%d:%d:%d\n",h,m,t);
    }
    return 0;
}
