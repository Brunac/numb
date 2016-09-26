#include<stdio.h>
int main()
{
    double s,increased;
    scanf("%lf",&s);
    if( s >= 0 && s <= 400.00){
        increased = s*0.15;
        s = s+increased;
        printf("Novo salario: %0.2lf\n",s);
        printf("Reajuste ganho: %0.2lf\n",increased);
        printf("Em percentual: 15 %%\n");
    }
    else if(s > 400.00 && s <= 800.00){
        increased=s*0.12;
        s =s+increased;
        printf("Novo salario: %0.2lf\n",s);
        printf("Reajuste ganho: %0.2lf\n",increased);
        printf("Em percentual: 12 %%\n");
    }
    else if( s > 800.00 && s <= 1200.00 ){
        increased = s*0.10;
        s = s+increased;
        printf("Novo salario: %0.2lf\n",s);
        printf("Reajuste ganho: %0.2lf\n",increased);
        printf("Em percentual: 10 %%\n");
    }
    else if( s>= 1200.01 && s <= 2000.00){
        increased = s*0.07;
        s = s+increased;
        printf("Novo salario: %0.2lf\n",s);
        printf("Reajuste ganho: %0.2lf\n",increased);
        printf("Em percentual: 7 %%\n");

    }
  else {
        increased = s*0.04;
        s = s+increased;
        printf("Novo salario: %0.2lf\n",s);
        printf("Reajuste ganho: %0.2lf\n",increased);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
