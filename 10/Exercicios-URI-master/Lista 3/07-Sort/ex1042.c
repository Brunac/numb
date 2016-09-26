#include <stdio.h>

int main(void){

	int a, b, c, m, n, o, order;
	scanf("%d %d %d", &a, &b, &c);

	m = a;
	n = b;
	o = c;

	if(m < n){
		order = m;
		m = n;
		n = order;
	}
	if(n < o){
		order = n;
		n = o;
		o = order;
	}
	if(m < n){
		order = m;
		m = n;
		n = order;
	}

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", o, n, m, a, b, c);

return 0;
}
