#include<stdio.h>
int main()
{
    int x,i;
    while(scanf("%d",&x)==1){
            if(x==0)
            break;
    for(i=1 ; i<=x ; i++){
        printf("%d",i);
        if(i == x)
            break;
        printf(" ");
    }
    printf("\n");
    }
    return 0;
}
