#include<stdio.h>
int main()
{
    int t,x,y,i,j,k,sum;

    scanf("%d",&t);

    for(i=1;i<=t;i++){

        scanf("%d %d",&x,&y);

        if(x>y){
                sum=0;
        for(j=y+1;j<x;j++){

            if(j%2!=0)
                sum=sum+j;
        }
        printf("%d\n",sum);
    }
      else{
            sum =0;
        for(j=x+1;j<y;j++){

            if(j%2!=0)
                sum=sum+j;
        }
        printf("%d\n",sum);
    }
    }
    return 0;
}
