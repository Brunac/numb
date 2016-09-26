#include<stdio.h>
int main()
{

    int code1,units1,code2,units2;

    float price1,price2,amount_to_be_paid;

    scanf("%d %d %f",&code1,&units1,&price1);

    scanf("%d %d %f",&code2,&units2,&price2);

    amount_to_be_paid = (units1*price1) + (units2*price2);

    printf("VALOR A PAGAR: R$ %0.2f\n",amount_to_be_paid);

    return 0;

}
