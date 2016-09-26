#include <stdio.h>

int main()

{

    int n;

    float m,salary,dolar;

    scanf("%d",&n);

    scanf("%f",&m);

    scanf("%f",&dolar);

    salary = m*dolar;

    printf("NUMBER = %d\n",n);

    printf("SALARY = U$ %0.2f\n",salary);

    return 0;

}
