#include<stdio.h>
int main()
{
    float average,sum = 0.0;
    int age,count = 0;

    while(scanf("%d",&age)==1 && age>0){
        count++;
        sum = sum + age;
    }

    average = sum / count;
    printf("%0.2f\n",average);

    return 0;
}
