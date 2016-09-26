#include<stdio.h>
#include<string.h>
int main()
{
    int t,len1,len2;
    char str1[50],str2[50];
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s",str1);
        scanf("%s",str2);
        len1=strlen(str1);
        len2=strlen(str2);
        if(len2>len1){
            int i;
          for(i=0;i<len1;i++){
            printf("%c%c",str1[i],str2[i]);
          }
        for(i=len1;i<len2;i++)
            printf("%c",str2[i]);
        }
        else{
            int i;
          for(i=0;i<len2;i++){
            printf("%c%c",str1[i],str2[i]);
          }
        for(i=len2;i<len1;i++)
            printf("%c",str1[i]);
        }
        printf("\n");
    }
}
