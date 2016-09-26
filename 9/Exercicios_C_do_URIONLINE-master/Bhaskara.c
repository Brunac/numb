//## Ivanoel Rodrigo
//## Formula de Bhaskara
#include<stdio.h>
#include<math.h>
int main(){
double A,B,C;
double v1, v2;
scanf("%lf %lf %lf", &A, &B, &C);
if(pow(B, 2) - (4 * A * C) >= 0 && A != 0){
v1 = (-B + sqrt(pow(B, 2) - (4 * A * C))) / (2 * A);
v2 = (-B - sqrt(pow(B, 2) - (4 * A * C))) / (2 * A);
printf("R1 = %.5lf\nR2 = %.5lf\n", v1, v2);
} else {
printf("Impossivel calcular\n");
}
return 0;
}
