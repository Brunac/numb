#include <stdio.h>

int main(void){

	double a, b, c, d, Media, exame, Mexame;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	Media = ((a*.2)+(b*.3)+(c*.4)+(d*.1));

	if(Media >= 7){
		printf("Media: %.1f\nAluno aprovado.\n", Media);
	}else if(Media < 5){
		printf("Media: %.1f\nAluno reprovado.\n", Media);
	}else if (Media <= 6.9){
		scanf("%lf", &exame);
		printf("Media: %.1f\n", Media);
		printf("Aluno em exame.\n");
		Mexame = (Media + exame) / 2;
		printf("Nota do exame: %.1f\n", exame);
		if(Mexame >= 5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", Mexame);
	}
return 0;
}
