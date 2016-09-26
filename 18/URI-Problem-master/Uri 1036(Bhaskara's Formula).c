#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,x,y,z,a,b,c;

    scanf("%lf %lf %lf",&A,&B,&C);

        x = B*B;

        y = 4*A*C;

        z = x-y;

    if (z>0 && A!=0){

        a = sqrt(z);

        b = (-B+a )/ (2*A);

        c = (-B-a) / (2*A);

    printf("R1 = %0.5lf\nR2 = %0.5lf\n",b,c);
}
    else if ( z<0 || A == 0 ){

    printf("Impossivel calcular\n");

}
    return 0;
}
