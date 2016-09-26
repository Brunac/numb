#include<stdio.h>
int main()
{
    int i,j,k,l;
    j=7;
    for(i=1;i<=9;i=i+2){
        l=j;
        for(k=1;k<=3;k++){
            printf("I=%d J=%d\n",i,l);
            l--;
        }
        j=j+2;
    }
}
