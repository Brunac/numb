#include<stdio.h>
int main()
{
	int t,h,m,s,x,y;

	scanf("%d",&t);

	h = t / 3600;
	x = t % 3600;
	m = x / 60;
	y = x % 60;
	s = y % 60;

	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
