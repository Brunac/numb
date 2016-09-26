#include<stdio.h>
#include<math.h>
int main()
{
    int a,x;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&x);
        long long int z;
        z=pow(2,x)/12000;
        printf("%lld kg\n",z);
    }
    return 0;
}
