#include <stdio.h>
int main()
{
    int n, t;
    double s;
    while( scanf(" %d %d %lf", &n, &t, &s) == 3){
        printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, t*s);
    }
    return 0;
}
