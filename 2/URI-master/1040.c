#include <stdio.h>

int main(void) {

	double N1, N2, N3, N4, media;
	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	media = ((2 * N1) + (3 * N2) +  (4 * N3) + N4) / 10;
	printf("Media: %.1f\n", media);
	if (media >= 7.0) {
		printf("Aluno aprovado.\n");
	} else if (media >= 5.0 && media <= 6.9) {
		printf("Aluno em exame.\n");
		double exame;
		scanf("%lf", &exame);
		printf("Nota do exame: %.1f\n", exame);
		media = (exame + media) / 2;
		if (media >= 5.0) {
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", media);
	} else {
		printf("Aluno reprovado.\n");
	}

	return 0;

}