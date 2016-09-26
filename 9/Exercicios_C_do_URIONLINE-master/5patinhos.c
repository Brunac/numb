// Ivanoel
#include <stdio.h>

int main()
{
        int duck,
            count;

        printf("Quantas patinhos a mamae Pata tem? ");
        scanf("%d", &duck);

        count = duck;
        while( count > 1)
        {
            printf("%d patinhos foram passear\n", count);
            printf("Além das montanhas\n");
            printf("Para brincar\n");
            printf("A mamãe gritou: Quá, quá, quá, quá\n");
            printf("Mas só %d patinhos voltaram de lá.\n\n", count-1);

            count--;
        }

        printf("1 patinho foi passear\n");
        printf("Além das montanhas\n");
        printf("Para brincar\n");
        printf("A mamãe gritou: Quá, quá, quá, quá\n");
        printf("Mas nenhum patinho voltou de lá.\n\n");

        printf("A mamãe patinha foi procurar\n");
        printf("Além das montanhas\n");
        printf("Na beira do mar\n");
        printf("A mamãe gritou: Quá, quá, quá, quá\n");
        printf("E os %d patinhos voltaram de lá.\n", duck);
}
