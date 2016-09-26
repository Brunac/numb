#include<stdio.h>
int main()
{
    float A,B;
    while( scanf("%f %f", &A, &B) == 2){
        float a;
        a= A * 3.5 + B * 7.5;
        a= a / 11;
        printf("MEDIA = %.5f\n", a);
    }
    return 0;
}
