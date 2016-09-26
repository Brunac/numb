#include <stdio.h>

int main(){
    int n;
    int i;
    int s;
    char n1[55], n2[55];
    int t1, t2, x;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s %s", &n1, &n2);
        t1 = strlen (n1);
        t2 = strlen (n2);
        if(t1 < t2)  x = t2;
        else x = t1;

        for(s = 0; s < x; s++){
            if (s < t1) printf("%c", n1[s]);
            if (s < t2) printf("%c", n2[s]);

        }
        printf("\n");
    }
return 0;
}
