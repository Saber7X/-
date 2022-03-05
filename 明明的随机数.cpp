#include<stdio.h>

int main()
{
	int n;
	int num[101];
	int t;
	int i,j;
	int cnt=0;
	
	scanf("%d",&n);
	
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
		if(num[i]!=num[i+1])
		{
			cnt++;	
		}
	}
	printf("%d\n",cnt);
	for(i=1;i<=n;i++)
	{
		if(num[i]!=num[i+1])
		{
			printf("%d ",num[i]);
		}
	}
	
	return 0;
}
	
	
