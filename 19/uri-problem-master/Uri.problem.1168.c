#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,i;
    char led[1000];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(led);
        //scanf(" %[^\n]",led);
        l=strlen(led);
        int s=0;
        for(i=0;i<l;i++){
            if(led[i]=='0')
                s=s+6;
            else if(led[i]=='1')
                s=s+2;
            else if(led[i]=='3'|| led[i]=='5'||led[i]=='2')
                s=s+5;
            else if(led[i]=='6'||led[i]=='9')
                s=s+6;
            else if(led[i]=='4')
                s=s+4;
            else if(led[i]=='7')
                s=s+3;
            else if(led[i]=='8')
                s=s+7;
        }
        printf("%d leds\n",s);
    }
    return 0;
}
