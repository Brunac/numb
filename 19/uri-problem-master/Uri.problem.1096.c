#include<stdio.h>
#include<math.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i=i+2){
        j=7;
        while(j>=5){
        printf("I=%d J=%d\n",i,j);
        j--;
        }
    }
}

