#include <stdio.h>

int main()

{
    float a =0 , b=0, c=0, d=0,temp;
    scanf("%f%f%f",&a,&b,&c);

    if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if (a < c)

    {

        temp = a;

        a = c;

        c = temp;

    }

    if (b < c)

    {

        temp = c;

        c = b;

        b = temp;

    }

    if(a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }

    else if((a*a) == ((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    }

    else if((a*a) > ((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a) < ((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b==c ){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || b == c) {
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
}


