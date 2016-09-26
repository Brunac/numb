#include <stdio.h>

int main(void){

	int a, b, c, d, t, min; //a = hora ini. b = min. ini. c = hora fin. d = min. fin.
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t = c - a;
	min = d - b;
	
	if(t < 0){
		t += 24;
	}
	if(min < 0){
		min += 60;
		t -= 1;
	}
	if(t == 0 && min == 0){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else if(t == 0 && min != 0){
		printf("O JOGO DUROU 0 HORA(S) E %.d MINUTO(S)\n", min);
	}else{
		printf("O JOGO DUROU %d HORA(S) E %.d MINUTO(S)\n", t, min);
	}
return 0;
}
