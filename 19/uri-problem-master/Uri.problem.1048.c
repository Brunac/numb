#include<stdio.h>
int main()
{
    double a,z;
    int p;
    while(scanf("%lf",&a)==1&&a>=0){
    if(a>=0&&a<=400)
        p=15;
    else if(a>400&&a<=800)
        p=12;
    else if(a>800&&a<=1200)
        p=10;
    else if(a>1200&&a<=2000)
        p=7;
    else
        p=4;
    z=(p*a)/100;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n",a+z,z,p,37);
    }
    return 0;
}
