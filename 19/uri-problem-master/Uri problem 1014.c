#include <stdio.h>
int main()
{
    double f, s;
    int x;
    while(scanf(" %d %lf", &x, &f) == 2){
        s = x / f;
        printf("%.3lf km/l\n", s);
    }
    return 0;
}
