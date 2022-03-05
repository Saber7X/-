#include<stdio.h>

int main()
{
	long int n;
	long long int num[1000000000];
	int t;
	int i,j;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%ld ",num[i]);
	}
	
	
	return 0;
	
	
	
}
