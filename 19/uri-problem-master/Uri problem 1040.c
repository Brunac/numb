#include<stdio.h>
int main()
{
    double a,b,c,d,avrg;
    while(scanf("%lf %lf %lf %lf", &a, &b, &c, &d) == 4){
        avrg = (a*2 + b*3 + c*4 + d) / 10;
        if(avrg >= 7)
            printf( "Media: %.1lf\nAluno aprovado.\n", avrg);
        else if(avrg < 5)
            printf( "Media: %.1lf\nAluno reprovado.\n", avrg);
        else{
            double mscore;
            scanf("%lf", &mscore);
            printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n", avrg, mscore);
            avrg=( avrg + mscore) / 2;
            if(avrg >= 5)
                printf("Aluno aprovado.\n");
            else
                printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", avrg);
        }
    }
    return 0;
}
