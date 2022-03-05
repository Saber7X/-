#include<stdio.h>
int main()
{
	long long int n=0;
	long long int i=0,j=0;
	long long int cnt=0;
	long long int num[100001];
	
	
	
	scanf("%d",&n);
	for(i=i;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i+j==n)
			{
				cnt++;
				num[cnt]=i*j;	
			}
		}
	}
	for(i=1;i<=n-1;i++)
	{
		for(cnt=1;cnt<=n-1;cnt++)
		{
			if(num[cnt]>num[cnt+1])
			{
				int t; 
				t=num[cnt];
				num[cnt]=num[cnt+1];
				num[cnt+1]=t;
			}
		}
	}
	printf("%lld",num[cnt]);
	return 0;
}
