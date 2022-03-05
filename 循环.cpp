#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	i++;
	a/=10;//如果没有这一步则计算0时会出错 
	while(a>0)
	{
		i++;
		a/=10;
	}
	printf("%d",i);
	return 0;
 } 
