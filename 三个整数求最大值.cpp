#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>b||a>c)&&(b>c||c>b))
	{
		printf("%d",a);
	}
	else if((b>a||b>c)&&(a>c||c>a))
	{
		printf("%d",b);}
	else if((c>a||c>b)&&(a>b||b>a))
	{
		printf("%d",c);
	}
	return 0;
} 
