#include<stdio.h>
int main()
{
    double p;
    int c, q; //q=quantity,c=code
    while(scanf("%d%d",&c,&q)==2){
        if(c==1)
            p=4.00;
        else if(c==2)
            p=4.50;
        else if(c==3)
            p=5.00;
        else if(c==4)
            p=2.00;
        else if(c==5)
            p=1.50;
        printf("Total: R$ %.2lf\n",p*q);
    }
    return 0;
}
