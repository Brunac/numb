#include<stdio.h>
int main()
{
    int a,b;

    float fuel;

    scanf("%d %d",&a,&b);

    fuel = (float)b / 12*a;

    printf("%0.3f\n",fuel);

    return 0;
}
