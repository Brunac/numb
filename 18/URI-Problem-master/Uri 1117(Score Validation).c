#include<stdio.h>
int main()
{
    int count = 0;
    double x,sum = 0.0,avg;
    while(scanf("%lf",&x)==1){

       if(x<0 || x>10)
       printf("nota invalida\n");

       else{
            count++;
        sum = sum+x;
       }

        if(count == 2)
            break;
    }
     avg = sum/count;
     printf("media = %0.2lf\n",avg);
     return 0;
}
