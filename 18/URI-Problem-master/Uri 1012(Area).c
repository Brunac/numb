#include<stdio.h>

#define pi 3.14159

int main()

{
    float A,B,C,triangle,circle,trapizium,square,rectangle;
    
    scanf("%f %f %f",&A,&B,&C);
    
    triangle = 0.5*A*C;
    
    circle = pi*C*C;
    
    trapizium = 0.5*(A+B)*C;
    
    square = B*B;
    
    rectangle = A*B;
    
    printf("TRIANGULO: %0.3f\nCIRCULO: %0.3f\nTRAPEZIO: %0.3f\nQUADRADO: %0.3f\nRETANGULO: %0.3f\n",triangle,circle,trapizium,square,rectangle);

    return 0;
}
