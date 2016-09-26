#include<stdio.h>
int main()
{
    int N[10],i,v,j;

    while(scanf("%d",&v)==1 && v<50){

    for(i=v,j=0 ; i<=v+9,j<10 ; i=i+i,j++){
        printf("N[%d] = %d\n",j,i);

    }
}
    return 0;
}
