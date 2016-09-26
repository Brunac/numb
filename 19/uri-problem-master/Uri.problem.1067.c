#include<stdio.h>
int main()
{
    int a,i;
    while(scanf("%d",&a)==1){
        for(i=1;i<=a;i++){
            if(i%2!=0)
                printf("%d\n",i);
        }
    }
    return 0;
}
