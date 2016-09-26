#include<stdio.h>
#include<string.h>
int main()
{
    char line1[1001],line2[1001];
    int l1,l2,d,t,i;
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s",line1);
        scanf("%s",line2);
        l1=strlen(line1);
        l2=strlen(line2);
        if(l2>l1){
            printf("nao encaixa\n");
        }
        else{
            d=l1-l2;
            int s=0,j=0;
            for(i=d;i<l1;i++){
                if(line1[i]==line2[j]){
                    s++;
                }
                j++;
            }
            if(s==l2)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
    return 0;
}
