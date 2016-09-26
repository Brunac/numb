#include<stdio.h>
int main()
{
    double x,y;
    int t;
    double s;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else{
                s=x/y;
                printf("%.1lf\n",s);
            }
    }
    return 0;
}
