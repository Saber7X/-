#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	i++;
	a/=10;//���û����һ�������0ʱ����� 
	while(a>0)
	{
		i++;
		a/=10;
	}
	printf("%d",i);
	return 0;
 } 
