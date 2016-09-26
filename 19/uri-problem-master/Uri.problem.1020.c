#include<stdio.h>
int main()
{
    int d, y, m;
    while(scanf("%d",&d)==1){
        y=d/365;
        d=d%365;
        m=d/30;
        d=d%30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    }
    return 0;
}
