#include<stdio.h>
int main()
{
    int A,B,c;
    scanf("%d %d",&A,&B);
    if ( A>B ){
        c = A;
        A = B;
        B = c;
    if( B % A == 0 )

       printf("Sao Multiplos\n");
       else
       printf("Nao sao Multiplos\n");
}
    else{

    if( B % A == 0 )
       printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
        }
    return 0;
}
