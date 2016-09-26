#include<stdio.h>
int main()
{
    double A,B,C;
    double max,mid,min;
    while(scanf("%lf%lf%lf",&A,&B,&C)==3&&A>0&&B>0&&C>0){
        if(A>=B&&A>=C){
            max=A;
            if(B>=C){
                mid=B;
                min=C;
            }
            else{
                mid=C;
                min=B;
            }
        }
        else if(B>=A&&B>=C){
            max=B;
            if(A>=C){
                mid=A;
                min=C;
            }
            else{
                mid=A;
                min=C;
            }
            }
        else{
            max=C;
            if(B>=A){
                mid=B;
                min=A;
            }
            else{
                mid=A;
                min=B;
            }
        }
        A=max;
        B=mid;
        C=min;
        if( A >= B + C){
            printf("NAO FORMA TRIANGULO\n");
            continue;
        }
        if(A*A==B*B+C*C)
            printf("TRIANGULO RETANGULO\n");
        if(A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if( A*A < B*B + C*C)
            printf("TRIANGULO ACUTANGULO\n");
        if(A==B&&A==C)
            printf("TRIANGULO EQUILATERO\n");
        if((A==B&&A!=C)||(A==C&&A!=B)||(B==C&&B!=A))
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
