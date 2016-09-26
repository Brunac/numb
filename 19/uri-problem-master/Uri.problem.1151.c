#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a, b, f;
    a=0;
    b=1;
    f=0;
    int i;
    for(i=1; i<=n; i++){
        printf("%lld", f);
        f= a+b;
        b=a;
        a=f;
        if(i<n)
            printf(" ");
    }
    printf("\n");
    return 0;
}

