#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		
		return f(n-1)+f(n-2);
	}
}
int main()
{
	
	int m;
	scanf("%d",&m);
	while(m--)
	{
		int n;
		int cnt=1;
		scanf("%d",&n);
		int c=(n-1)*2;
		for(int i=1;i<=n;i++)
		{
			
			for(int t=1;t<=c;t++)
			{
				printf(" ");
			}
			c-=2;
			for(int j=1;j<=cnt;j++)
			{
				printf("%d ",f(j));
			}
			printf("\n");
			cnt+=2;
		}
		
	}
	return 0;
	
}		
		
	
	

