#include<stdio.h>

int main()
{
    float A,B,C,d,perimetro,Area;

    scanf("%f %f %f",&A,&B,&C);

    if(A+B>C && B+C>A && C+A>B){

        perimetro = A+B+C;

        printf("Perimetro = %0.1f\n",perimetro);
}
    else {
        Area = 0.5*(A+B)*C;

        printf("Area = %0.1f\n",Area);
    }
    return 0;
}
