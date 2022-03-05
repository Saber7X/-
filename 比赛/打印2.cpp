#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int cnt=n-2;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			for(int j=0;j<n;j++)
			{
				printf("*");
			}
		}
		else if(i==n-1)
		{
			for(int j=0;j<n;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(int k=0;k<cnt;k++)
			{
				printf(" ");
			}
			printf("*");
			cnt--; 
		}
		
		printf("\n");
	}
	return 0;
}
