#include <stdio.h>
#include <string.h>
int main(){
    char data[30],
        *p,
        dia[3] = "0\0\0";

        printf("Digite uma data:\n");
        scanf("%s", data);

    if (strlen(data)!= 10)
        printf("Data invalida: diferente de 10");

    else{
        p = strchr(data, '/');
        if(p == NULL || strlen(p)!=8)
            printf("Data invalida: primeira barra errado\n");

        else{
            printf("%s\n",p);
            p++;
            p = strchr(p,'/');

            if(p == NULL || strlen(p) != 5)
                printf("Data invalida: segunda barra errada\n");

            else{
                printf("%s\n",p);
                printf("Data com barras ok\n");

                strncpy(dia, data, 2);
                printf("Dia: %s",
                dia);

   }
    }
}

    return 0;

}
