#include<stdio.h>
int main()
{
    int N,i;

    double x,y,z,ave;

    scanf("%d",&N);

    for(i=1;i<=N;i++){

        scanf("%lf %lf %lf",&x,&y,&z);

        ave = 2*x+3*y+5*z;

        printf("%0.1lf\n",ave/10);
    }

    return 0;
}
