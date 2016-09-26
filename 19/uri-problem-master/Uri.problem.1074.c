#include<stdio.h>
int main()
{
        int t, a;
        scanf("%d",&t);
        while(t--){
            scanf("%d",&a);
            if(a==0)
                printf("NULL");
            else if(a>0){
                if(a%2==0)
                    printf("EVEN POSITIVE");
                else
                    printf("ODD POSITIVE");
            }
            else if(a<0){
                if(a%2==0)
                    printf("EVEN NEGATIVE");
                else
                    printf("ODD NEGATIVE");
            }
            printf("\n");
        }
        return 0;
}

