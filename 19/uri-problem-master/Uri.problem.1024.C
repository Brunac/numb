#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,l,k;
    char s[100];
    scanf("%d",&t);
    while(t--){
        gets(s);
        l=strlen(s);
        for(k=0;k<l;k++){
            if((s[k]>='a'&&s[k]<='z') || (s[k]>='A'&&s[k]<='Z'))
                s[k]=s[k]+3;
        }
        for(i=0;i<l/2;i++){
            char temp;
            temp=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=temp;
        }
        for(j=l/2;j<l;j++){
            s[j]=s[j]-1;
        }
        printf("%s",s);
        printf("\n");
    }
    return 0;
}
