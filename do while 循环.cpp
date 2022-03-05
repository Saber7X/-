#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	do
	{
	   	i++;
		a/=10;
	}
	while(a>0);
	printf("%d",i);
	return 0;
 } 
