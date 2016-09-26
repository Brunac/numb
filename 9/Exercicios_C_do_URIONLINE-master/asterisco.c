#include <stdio.h>

int main()
{
        int lado,
            q=1;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        //Imprimindo a primeira linha
        while(q<=lado)
        {
            printf("*");
            q++;
        }
        printf("\n");

        q=1;
        while( q <= lado*(lado-2))
        {
            if( (q%lado == 1))
                printf("*");
            else
                if( (q%lado == 0))
                    printf("*\n");
                else
                    printf(" ");

            q++;
        }

        //Imprimindo a primeira linha
        q=1;
        while(q<=lado)
        {
            printf("*");
            q++;
        }
        printf("\n");


}
