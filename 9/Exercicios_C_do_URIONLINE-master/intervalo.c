//## Ivanoel Rodrigo
//## Intervalos
//## Algoritmo C
#include <stdio.h>
#include <math.h>
int main(){
float x;
//printf("Informe entre esse Intervalos: ([0,25]),([25,50]),([50,75]),([75,100])\n");
scanf("%f",&x);
if(x>=0 && x<=25.0000000){
printf("Intervalo [0,25]\n");
}else if(x>=25.00001 && x<=50.0000000){
printf("Intervalo (25,50]\n");
}else if(x>=50.00001 && x<=75.0000000){
printf("Intervalo (50,75]\n");
}else if(x>=75.00001 && x<=100.0000000){
printf("Intervalo (75,100]\n");
}else if(x<0 || x>100){
printf("Fora de intervalo\n");
}
 return 0;
}
