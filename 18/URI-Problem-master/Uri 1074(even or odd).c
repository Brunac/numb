#include<stdio.h>
int main()
{
    int N,i;

    long long int x;

    scanf("%d",&N);

        for(i=1; i<=N; i++){

        scanf("%lld",&x);

        if(x==0)
            printf("NULL\n");

        else if(x<0 && x%2==0)
            printf("EVEN NEGATIVE\n");

        else if(x<0 && x%2!=0)
            printf("ODD NEGATIVE\n");

        else if(x>0 && x%2==0)
            printf("EVEN POSITIVE\n");

        else if(x>0 && x%2!=0)
            printf("ODD POSITIVE\n");
    }
    return 0;
}
