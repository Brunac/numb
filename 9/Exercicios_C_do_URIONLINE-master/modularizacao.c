#include <stdio.h>
#include <stdlib.h>

int main()
{
int idade;
int fatorial1 = 1;
int i;
int num2;
char mes [20];
printf("Informe um valor inteiro conforme a dias?\n");
scanf("%d",&idade);
for(i=idade;i>=365;i--){
fatorial1 = fatorial1 * i;
}
    printf("O fatorial de %d é %d\n ", idade);
    printf("Digite um numero para calcular o quadrado:\n");
    scanf("%d",&num2);
    printf("o quadrado de %d eh %d\n", num2,(num2*num2));
    printf("Informe um valor inteiro conforme a dias?\n");
    scanf("%d",&idade);
    for(i=idade;i>=365;i--){
    fatorial1 = fatorial1 + 1;
}
    printf("O mes é: %s",mes);
    scanf("O mes:",&mes);






    return 0;
}
