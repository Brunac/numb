#include<stdio.h>
int main()
{
    int N,i,x,y;
    double z;
    scanf("%d",&N);
    for(i=1 ; i<=N ; i++){

        scanf("%d %d",&x,&y);

        z = (double)x/y;

        if(y == 0)
            printf("divisao impossivel\n");

        else
            printf("%0.1lf\n",z);
    }
     return 0;
}
