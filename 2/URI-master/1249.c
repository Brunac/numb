#include <stdio.h>
#include <string.h>

int main(void) {
	
	int i;
	char str[60];
	while(gets(str)) {
		for(i = 0; i < strlen(str); i++) {
			if(str[i] >= 'A' && str[i] <= 'Z') {
				if(str[i] > 77) {
					str[i] -= 13;
				} else {
					str[i] += 13;
				}
			} else if(str[i] >= 'a' && str[i] <= 'z') {
				if(str[i] > 109) {
					str[i] -= 13;
				} else {
					str[i] += 13;
				}
			}
		}
		printf("%s\n", str);
	}
	
	return 0;
	
}
