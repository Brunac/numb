#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char str[1001];
    while( gets(str) != NULL ){
        len = strlen(str);
        int i = 0;
        while(i<len){
            if(str[i] >= 'a' && str[i] <= 'z'){
                if(str[i] + 13 > 'z')
                    printf("%c", str[i] - 13);
                else
                    printf("%c", str[i] + 13);
                  }
            else if(str[i] >= 'A' && str[i] <= 'Z'){
                if(str[i] + 13 > 'Z')
                    printf("%c", str[i] - 13);
                else
                    printf("%c", str[i] + 13);
                  }
            else printf("%c", str[i]);
            i++;
        }
        printf("\n");
    }
}
