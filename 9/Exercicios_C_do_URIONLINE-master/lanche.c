//Aluno: Ivanoel Rodrigo
//Lanche
//Codigo e quantidade
#include <stdio.h>
#include <stdlib.h>
int main()
{
int cod, qtd;
float vt;
//printf("Informe o codigo do produto e a quantidade:\n");
//printf("\n1 Cachorro Quente = R$ 4.00\n2 X-Salada = R$ 4.50\n3 X-Bacon = R$ 5.00\n4 Torrada simples = R$ 2.00\n5 Refrigerante = R$ 1.50 \n\n");
scanf("%d %d",&cod,&qtd);
if(cod==1){
vt=qtd*4.00;
printf("Total: R$ %.2f\n",vt);
}else if(cod==2){
vt=qtd*4.50;
printf("Total: R$ %.2f\n",vt);
}else if(cod==3){
vt=qtd*5.00;
printf("Total: R$ %.2f\n",vt);
}else if(cod==4){
vt=qtd*2.00;
printf("Total: R$ %.2f\n",vt);
}else if(cod==5){
vt=qtd*1.50;
printf("Total: R$ %.2f\n",vt);
}

    return 0;
}
