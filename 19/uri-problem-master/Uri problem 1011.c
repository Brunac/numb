#include <stdio.h>
#define pi 3.14159
int main()
{
    int r;
    while( scanf("%d", &r) == 1){
        double a = 4.0 / (3 * pi*r*r*r);
        printf("VOLUME = %.3lf\n", a);
    }
    return 0;
}
