#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j,t,n;
    char str[100];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        scanf("%d",&n);
        getchar();
        len=strlen(str);
        j=0;
        while(j<len){
            str[j]-=n;
            if(str[j]<65)
                str[j]+=26;
            printf("%c",str[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}
