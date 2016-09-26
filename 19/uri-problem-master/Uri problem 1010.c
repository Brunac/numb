#include <stdio.h>
int main()
{
    int c1, c2, u1, u2;
    double p1, p2;
    while(scanf("%d %d %lf", &c1, &u1, &p1) == 3){
        scanf(" %d %d %lf", &c2, &u2, &p2);
        double price = u1*p1 + u2*p2;
        printf("VALOR A PAGAR: R$ %.2lf\n", price);
    }
    return 0;
}
