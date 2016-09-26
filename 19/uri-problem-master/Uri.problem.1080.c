#include<stdio.h>
int main()
{
    int num[100],i;
    int max=0,j;
    for(i=0;i<100;i++){
        scanf("%d",&num[i]);
        if(num[i]>max){
            max=num[i];
            j=i;
        }
    }
    printf("%d\n%d\n",max,j+1);
   return 0;
}
