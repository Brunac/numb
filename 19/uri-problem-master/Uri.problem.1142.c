#include<stdio.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    j=1;
    while(n--){
        for(i=1;i<=3;i++){
           printf("%d ",j);
           j++;
        }
        printf("PUM\n");
        j++;
    }
}
