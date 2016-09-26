#include<stdio.h>
int main()
{
    double x,y;
    while(scanf("%lf %lf",&x,&y)==2){

    if(x>0 && y>0)
        printf("primeiro\n");

    else if(x>0 && y<0)
        printf("quarto\n");

    else if(x<0 && y>0)
        printf("segundo\n");

    else if(x<0 && y<0)
        printf("terceiro\n");

    else if(x==0 || y==0)
        break;
    }
    return 0;
}
