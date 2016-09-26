#include <stdio.h>
int main()
{
    int n,ano,mes,dia,i;

    scanf("%d",&n);

    ano = n / 365;

    i = n % 365;

    mes = i / 30;

    dia = i % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);

    return 0;
}
