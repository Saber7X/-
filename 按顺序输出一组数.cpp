#include<stdio.h>
int main()
{
	int a,b,c=0;
	a=21345;
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	 } 
	 printf("%d",c);
 } 
