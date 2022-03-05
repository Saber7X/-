#include<stdio.h> 
int main()
{
	double pi = 3.14159, a, b, c, d;
	scanf("%lf%lf", &a, &b);
	c = pi * a * b * b / 1000; d = 20 / c;
	if(d > (int)d) d ++;
	printf("%d", (int)d);
}

