#include<stdio.h>
int main()
{

    int N,i,count1=0,count2=0;

    long long int x;

    scanf("%d",&N);

    for(i=1;i<=N;i++){

        scanf("%lld",&x);

        if(x>=10 && x<=20)
            count1++;

        else
            count2++;
    }

    printf("%d in\n",count1);
    printf("%d out\n",count2);

    return 0;
}
