#include <stdio.h>

int main(void) {

	int di, df, hi, hf, mi, mf, si, sf, ti, tf, dur, dia, hora, minuto, segundo;
	scanf("Dia %d", &di);
	scanf(" %d : %d : %d", &hi, &mi, &si);
	scanf(" Dia %d", &df);
	scanf(" %d : %d : %d", &hf, &mf, &sf);
	
	ti = (di * 86400) + (hi * 3600) + (mi * 60) + si;
	tf = (df * 86400) + (hf * 3600) + (mf * 60) + sf;
	
	dur = tf - ti;
	
	dia = dur / 86400;
	dur -= dia * 86400;
	hora = dur / 3600;
	dur -= hora * 3600;
	minuto = dur / 60;
	dur -= minuto * 60;
	segundo = dur;
	
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n", hora);
	printf("%d minuto(s)\n", minuto);
	printf("%d segundo(s)\n", segundo);
	
	return 0;
	
}
