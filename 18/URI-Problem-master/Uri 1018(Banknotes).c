#include<stdio.h>
int main()
{

    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;

    scanf("%d",&a);

    printf("%d\n",a);
    b = a/100;

    printf("%d nota(s) de R$ 100,00\n",b);
    c = a%100;
    d = c/50;

    printf("%d nota(s) de R$ 50,00\n",d);
    e = c%50;
    f = e/20;

    printf("%d nota(s) de R$ 20,00\n",f);
    g = e%20;
    h = g/10;

    printf("%d nota(s) de R$ 10,00\n",h);
    i = g%10;
    j = i/5;

    printf("%d nota(s) de R$ 5,00\n",j);
    k = i%5;
    l = k/2;

    printf("%d nota(s) de R$ 2,00\n",l);
    m = k%2;
    n  =m/1;

    printf("%d nota(s) de R$ 1,00\n",n);
    return 0;
}
