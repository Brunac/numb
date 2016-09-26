#include<stdio.h>
int main()
{
    int t;
    double a;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&a);
        int n=0;
        double i;
        for(i=a;i>1;i=i/2){
            n++;
        }
        /*while(a>1){
            a=a/2;
            n++;
        }*/
        printf("%d dias\n",n);
    }
    return 0;
}
