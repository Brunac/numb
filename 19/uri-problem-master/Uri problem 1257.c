#include<stdio.h>
#include<string.h>
void main()
{
     int t1,t2,len,i,j;
     char str[1001];
     scanf("%d",&t1);
     while(t1--){
        scanf("%d",&t2);
        getchar();
        i=0;
        int s=0;
        while(i<t2){
            gets(str);
            //getchar();
            len=strlen(str);
            for(j=0;j<len;j++){
                s=s+(str[j]-65)+j+i;
            }
            str[0]='\0';
            i++;
        }
        printf("%d\n",s);
     }
}
