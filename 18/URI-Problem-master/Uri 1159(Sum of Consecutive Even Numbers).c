#include<stdio.h>
int main()
{
    int x,i,sum;
    while(scanf("%d",&x)==1){
            if(x == 0)
               break;
    sum = 0;
    for(i=1 ; i<=10 ; i++){
            if(x%2 == 0){
            sum = sum + x;
            }
            x++;
    }
    printf("%d\n",sum);
    }
    return 0;
}
