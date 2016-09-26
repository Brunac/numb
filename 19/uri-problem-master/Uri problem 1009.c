#include <stdio.h>
#include <math.h>
int main()
{
    char name[25];
    double salary, sold;
    while(scanf("%s", name) == 1){
    scanf("%lf %lf", &salary, &sold);
    sold = sold * .15;
    double total = salary + sold;
    printf("TOTAL = R$ %.2lf\n", total);
    }
    return 0;
}
