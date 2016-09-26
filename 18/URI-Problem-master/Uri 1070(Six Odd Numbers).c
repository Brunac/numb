#include<stdio.h>
int main()
{
    int a,i;

    scanf("%d",&a);

    for( i = a ; i <= a+11 ; i = i+1){
        if(i%2 != 0){

            printf("%d\n",i);
        }
    }
    return 0;
}
