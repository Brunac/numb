#include<stdio.h>
int main()
{
    int x,y,i,sum;
    while(scanf("%d %d",&x,&y)==2){

        if(x > y){
            sum=0;

    for(i=y ; i<=x ; i++){

        if(i%13 != 0)
                sum = sum+i;
    }
        printf("%d\n",sum);
}
       else{
        sum = 0;
        for(i=x ; i<=y ; i++){

        if(i%13 != 0)
                sum = sum+i;
        }
        printf("%d\n",sum);
    }
}
    return 0;
}
