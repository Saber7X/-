#include<stdio.h>
int main()
{
	int m,n;
	int i;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m%2==1&&n%2==1)
	{
		for(i=m;i<=n;i+=2)
		{
			sum+=i;
		}
	}
	else if(m%2==1&&n%2==0)
	{
		for(i=m;i<n;i+=2)
		{
			sum+=i;
		}
	}
	else if(m%2==0&&n%2==1)
	{
		for(i=m+1;i<=n;i+=2)
		{
			sum+=i;
		}
	}
	else if(m%2==0&&n%2==0)
	{
		for(i=m+1;i<n;i+=2)
		{
			sum+=i;
		}
	}
	printf("%d",sum);
	return 0;
 } 
