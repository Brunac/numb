#include<stdio.h>
#include<string.h>
int main()
{
    char line[1001];
    int len;
    while(gets(line) !=NULL){
        len=strlen(line);
        int i=0,b=0,j=0;
        while(j<len){
            if(line[j]=='_'){
                if(i==0){
                    printf("<i>");
                    i=1;
                }
                else{
                    printf("</i>");
                    i=0;
                }
            }
            else if(line[j]=='*'){
                if(b==0){
                    printf("<b>");
                    b=1;
                }
                else{
                    printf("</b>");
                    b=0;
                }
            }
            else
                printf("%c",line[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}
