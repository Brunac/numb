#include <stdio.h>

int main() {
        double area, raio, tt = 3.14159;
                scanf("%lf", & raio);
//O lf é um tipo de leitor mais preciso que o f e o que é funcional com a atribuição double 
                        area = tt * (raio * raio);
                printf("A=%.4f\n", area);
        return 0;

}
//Accepted
