#include<stdio.h>
int main()
{
    int N,j,l;
    scanf("%d",&N);
    l = 0;
    for(j=1 ; j<=N ; j++){

        printf("%d %d %d\n",j,j*j,j*j*j);
        printf("%d %d %d\n",j,(j*j)+1,(j*((j*j)+1)-l));
        l++;
    }
    return 0;
}
