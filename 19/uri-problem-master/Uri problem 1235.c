#include <stdio.h>
#include <string.h>
int main()
{
    int tcase, i, k, mid, len;
    char str[1001];
    scanf("%d", &tcase);
    while(tcase--){
        getchar();
        gets(str);
        len = strlen(str);
        mid = (len / 2)- 1;
        for(i = mid ; i >= 0; i--){
            printf("%c", str[i]);
        }
        for(k = len-1; k > mid ; k--){
            printf("%c", str[k]);
        }
        printf("\n");
    }
    return 0;
}
