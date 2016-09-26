#include<stdio.h>
#include<math.h>
int main()
{
    int t,len,i,j;
    char str[1001];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        len=strlen(str);
        printf("%d",len);
        j=0;
        for(i=0;i<len;i++){
            if(str[i]>='a'&&str[i]<='z'){
                if(j==0){
                    printf("%c",str[i]);
                    j=1;
                }
                continue;
            }
            else if(str[i]=='.'||str[i]==' '||str[i]==-6)
                j=0;
        }
        printf("\n");
    }
    return 0;
}
