#include<stdio.h>
int main()
{
    char name[10];

    double salary,sold,total_salary;

    gets(name);

    scanf("%lf %lf",&salary,&sold);

    total_salary = salary + (sold*15)/100;

    printf("TOTAL = R$ %0.2lf\n",total_salary);

    return 0;

}
