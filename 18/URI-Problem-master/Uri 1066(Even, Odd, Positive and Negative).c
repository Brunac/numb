#include<stdio.h>
int main()
{
    int i,a,count1 = 0,count2 = 0,count3 = 0,count4 = 0;

    for(i=1 ; i<=5 ; i++){

        scanf("%d",&a);

        if(a%2==0){
                count1++;
    }
        if(a%2!=0)
            count2++;

        if(a>0)
            count3++;

        if(a<0)
            count4++;

}
    printf("%d valor(es) par(es)\n",count1);
    printf("%d valor(es) impar(es)\n",count2);
    printf("%d valor(es) positivo(s)\n",count3);
    printf("%d valor(es) negativo(s)\n",count4);

    return 0;
}

