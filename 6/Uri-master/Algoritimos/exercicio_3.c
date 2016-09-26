#include <stdio.h>

int main ()
{
	unsigned short  a = 5 , b = 2 , c = 4 , d = 6 , e = 3;
	float conta ;
	char escolha;
	unsigned short decisao ;

	do{
		printf("Deseja ver qual exercicio ?\n");
		escolha = getchar();
			switch (escolha)
			{
				case 'a' : case 'A':
						conta = (float) a + b * c;
						printf("a + b * c = %f" ,conta);
						decisao = 0;
				break;
				case 'b' : case 'B':
						conta = (float) (a + b) * c;
						printf("(a + b) * c = %f", conta);
						decisao = 0;
				break;
				case 'c' : case 'C':
						conta = (float) d / b - c % b;
						printf("d / b - c % b = %f" , conta);
						decisao = 0;
				break;
				case 'd' : case 'D':
						conta = (float) a * c + d * b;
						printf("a * c + d * b = %f",conta);
						decisao = 0;
				break;
				case 'e' : case 'E':
						conta = d * b % c * e;
						printf("d * b % c * e = %f", conta);
						decisao = 0;
				break;
				case 'f' : case 'F':
						conta = (d * b) % (c * e);
						printf("(d * b) % (c * e) = %f", conta);
						decisao = 0;
				break;
				case 'g' : case 'G':
						conta = (float)(a * b + 2) / (c * e);
						printf("(a * b + 2) / (c * e) = %f", conta);
						decisao = 0;
				break;
				case 'h' : case 'H':
						conta = a % b * c;
						printf("a % b * c = %f", conta);
						decisao = 0;
				break;
				case 'i' : case 'I':
						conta =  c % (b * a);
						printf("c % (b * a) = %f", conta);
						decisao = 0;
				break;
				case 'j' : case 'J':
						conta = (b % c) * a;
						printf("(b % c) * a = %f", conta);
						decisao = 0;
				break;
				default:
					printf("Erro caracter nao reconhecido\n");
					decisao = 1;
					break;
			}
		}while (decisao == 1);
	return 0;
}
