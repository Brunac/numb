#include <stdio.h>
#include <string.h>
int main()
{
    int tcase, i, len, j;
    char str[1501];
    scanf("%d", &tcase);
    while(tcase--){
        int count[26]={0}, c = 0;
        scanf(" %[^\n]", str);
        len = strlen(str);
        for( i = 0; i < len; i++){
            if((str[i] >= 'a' && str[i] <= 'z')){
                count[str[i]-'a'] = 1;
            }
        }
        for(j = 0; j < 26; j++){
            if(count[j] == 1)
                c++;
        }
        if( c == 26 ){
            printf("frase completa\n" );
        }
        else if( c >= 13 && c != 26 ){
            printf("frase quase completa\n" );
        }
        else{
            printf("frase mal elaborada\n" );
        }
    }
    return 0;
}
