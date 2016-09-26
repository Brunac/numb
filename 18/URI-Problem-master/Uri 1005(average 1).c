#include<stdio.h>

int main()

{
    float A,B,C,D,E;

    scanf("%f %f",&A,&B);

    C = A*3.5;

    D = B*7.5;

    E = (C+D)/11;

    printf("MEDIA = %0.5f\n",E);

    return 0;

}
