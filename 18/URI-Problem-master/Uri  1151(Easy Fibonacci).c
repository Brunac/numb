#include<stdio.h>
int main()
{
    int N,i;
    long long int next,first = 0,second = 1;
    while(scanf("%d",&N)==1 && N>0 && N<46){
    for(i=0; i<N ; i++){

        if(i<=1)
            next = i;

        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld",next);
    if(i == N-1)
    {
        break;
    }
        printf(" ");

    }
    printf("\n");
    }
return 0;
}
