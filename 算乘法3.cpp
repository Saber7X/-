#include<stdio.h>
int main()
{
	long long int n;
	long long int i,j;
	long long int cnt=0;
	long long int num[100001];
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		
		j=n-i;
		cnt++;
		num[cnt]=j*i;
		
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
