#include <stdio.h>
#define MAX_NAME_LEN 64

int main(void) {

	char x[MAX_NAME_LEN], y[MAX_NAME_LEN], z[MAX_NAME_LEN];
	scanf("%s", x);
	scanf("%s", y);
	scanf("%s", z);

	if (!strcmp(x, "vertebrado")) {
		if (!strcmp(y, "ave")) {
			if (!strcmp(z, "carnivoro")) {
				printf("aguia\n");
			} else if (!strcmp(z, "onivoro")) {
				printf("pomba\n");
			}
		} else if (!strcmp(y, "mamifero")) {
			if (!strcmp(z, "onivoro")) {
				printf("homem\n");
			} else if (!strcmp(z, "herbivoro")) {
				printf("vaca\n");
			}
		}
	} else if (!strcmp(x, "invertebrado")) {
		if (!strcmp(y, "inseto")) {
			if (!strcmp(z, "hematofago")) {
				printf("pulga\n");
			} else if (!strcmp(z, "herbivoro")) {
				printf("lagarta\n");
			}
		} else if (!strcmp(y, "anelideo")) {
			if (!strcmp(z, "hematofago")) {
				printf("sanguessuga\n");
			} else if (!strcmp(z, "onivoro")) {
				printf("minhoca\n");
			}
		}
	}

	return 0;

}