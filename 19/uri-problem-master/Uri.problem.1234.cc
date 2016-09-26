#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j;
    char d[1000];
    while(gets(d)){
        //scanf(" %[^\n]",d)
        l=strlen(d);
        j=0;
        for(i=0;i<l;i++){
          if(d[i]>='a'&&d[i]<='z'||d[i]>='A'&&d[i]<='Z'){
                j++;
          if(j%2!=0&&d[i]>='a')
            d[i]='A'+(d[i]-'a');
          else if(j%2==0&&d[i]<='Z')
            d[i]='a'+(d[i]-'A');
          }
        }
    printf("%s\n",d);
    }
    return 0;
}
