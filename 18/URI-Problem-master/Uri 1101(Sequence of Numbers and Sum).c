#include<stdio.h>
int main()
{
    int t,x,y,i,j,k,sum;

        while(scanf("%d %d",&x,&y)==2){

                if(x==0 || y==0 || x<0 || y<0){
                    break;
    }
        if(x>y){
                sum=0;
        for(j=y;j<=x;j++){

                sum=sum+j;

                printf("%d ",j);
        }

        printf("Sum=%d\n",sum);
    }
      else{
            sum=0;
        for(j=x;j<=y;j++){

                sum=sum+j;

                printf("%d ",j);
        }
        printf("Sum=%d\n",sum);
    }
        }
    return 0;
}
