#include<stdio.h>
#define PI 3.14159
int main()
{

    int radius;
    double volume;
    scanf("%d",&radius);
    volume=(4.0*PI*radius*radius*radius)/3;
    printf("VOLUME = %0.3lf\n",volume);
    return 0;

}
