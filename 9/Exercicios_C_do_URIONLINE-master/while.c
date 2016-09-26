#include <stdio.h>
void oi(){
printf("Oi!!!\n");
}
void tudo_bem(){
printf("Tudo e você?\n");
}
void otimo(){
printf("ou ótimo graças à Deus...\n");
}
void sair(){
printf("Tchau!!!\n");
}

int main()
{
int cont = 1;

do{
printf("\n\tChat para sempre...\n");
printf("1. Oi\n");
printf("2. Tudo bem\n");
printf("3. Como vai a familia?\n");
printf("0. Sair\n");

scanf("%d",&cont);
system("cls || clear");

switch(cont){
case 1:
oi();
break;
case 2:
tudo_bem();
break;
case 3:
otimo();
break;
case 0:
sair();
break;

default:
printf("Digite uma opção valida\n");

}
} while(cont);


}

