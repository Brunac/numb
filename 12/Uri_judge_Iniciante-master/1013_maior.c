#include <stdio.h>

int main () {
  
	int maiorAC,maiorAB, maiorBC, a,b,c;
		scanf("%d %d %d", &a ,&b, &c);

			if (a > b && a > c) {
				maiorAB = a;
}
			if (b > a && b > c) {
				maiorAB = b;
}
			if (c > a && c > b) {
				maiorAB = c;
}

		printf ("%d eh o maior\n", maiorAB);
	return 0;
}
//	Accepted
