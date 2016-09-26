#include<stdio.h>

int main()

{
    float A,B,C,D,E,F,G;

    scanf("%f %f %f",&A,&B,&C);

    D = A*2;

    E = B*3;

    F = C*5;

    G = (D+E+F)/10;

    printf("MEDIA = %0.1f\n",G);

    return 0;

}
