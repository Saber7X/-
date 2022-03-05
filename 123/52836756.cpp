#include<stdio.h>
int main()
{
	int i=0;
	int sum=0;
	int num[100];
	for(i=0;i<=99;i++)
	{
		num[i]=i+1;
		sum=sum+num[i];
		printf("%d\n",num[i]);
	}
	printf("%d",sum);
	return 0;
 } 
