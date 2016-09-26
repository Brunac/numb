#include<stdio.h>

int main()
{
    float inicial = 0.0,
          investimento = 0.0,
          valor_final;

    int meses=0,
        count;

    printf("Investimento inicial: ");
    scanf("%f", &inicial);
    valor_final = inicial;

    printf("Investimento mensal: ");
    scanf("%f", &investimento);

    printf("Tempo, em meses, que deixara rendendo: ");
    scanf("%d", &meses);


    for(count = 1 ; count <= meses ; count++)
    {
        valor_final = 1.005*valor_final;
        valor_final += investimento;
        printf("Apos %d mes(es) voce tera: %.2f\n", count, valor_final);
    }

    printf("\nVoce comecou com %.2f e investiu %.2f durante %d meses\n", inicial, investimento, meses);
    printf("Seu lucro foi de %.2f\n", valor_final - inicial - (meses*investimento));
}
