#include<stdio.h>

#include<math.h>

int main()

{

    float x1,x2,y1,y2,z,x,y;

    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

    x = (x2-x1)*(x2-x1);

    y = (y1-y2)*(y1-y2);

    z = sqrt(x+y);

    printf("%0.4f\n",z);

    return 0;

}
