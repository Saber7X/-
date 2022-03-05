#include<bits/stdc++.h>
int sushu(int a)
{
		int i,j;
		
		if(a==1)
		{
			return 0;
		}
		else if(a==2||a==3)
		{
			return 1;
		}
		else if(a>=4)
		{
			for(j=2;j<=sqrt(a);j++)
			{
			
				if(a%j==0)
				{
					return 0;
				
				}
			}
			return 1;
		}
}
using namespace std;
int main()
{
	int n;
	long long int a[100866];
	long long int i,j;int t=1;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{ 
		if(sushu(a[i])==1)
		{
			printf("Yes\n");
		}
		else if(sushu(a[i])==0)
		{
			printf("No\n");
		}
	}
		
	return 0;
 } 	
	

