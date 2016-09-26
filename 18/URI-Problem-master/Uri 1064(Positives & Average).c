#include<stdio.h>
int main()
{
    int i,count = 0;

    double a,b,sum=0.0;

    for(i=1 ; i<=6 ; i++){
        scanf("%lf",&a);

        if(a>0){
            count++;
            sum = sum+a;
        }
    }
    printf("%d valores positivos\n",count);

    printf("%0.1lf\n",sum/count);

    return 0;
}
