#include<stdio.h>

#include<math.h>

int main()

{

    int a,b,c,d,e,f,g;

    scanf("%d %d %d",&a,&b,&c);

    d=abs(a-b);

    e=(a+b+d)/2;

    f=abs(e-c);

    g=(e+c+f)/2;

    printf("%d eh o maior\n",g);

    return 0;

}
