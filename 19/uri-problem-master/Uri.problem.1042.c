#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        if(a>b&&a>c){
            if(b>c)
                printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,b,a,a,b,c);
            else
               printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,c,a,a,b,c);
        }
        if(b>a&&b>c){
            if(a>c)
                printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,a,b,a,b,c);
            else
                printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,c,b,a,b,c);
        }
        if(c>a&&c>b){
            if(a>b)
                printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,a,c,a,b,c);
            else
                printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,a,b,c);
        }
    }
    return 0;
}
