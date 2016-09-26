#include <stdio.h>
int main()
{
    int a, b, tcase, sum;
    char c;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %c %d", &a, &c, &b);
        if(a == b){
            sum = a*a;
            printf("%d\n", sum);
            continue;
        }
        if( c >= 'a' && c <= 'z')
            sum = a + b;
        else
            sum = b -a;
        printf("%d\n", sum);
    }
    return 0;
}
