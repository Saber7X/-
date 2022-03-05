#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);int cnt=0;
	for(int i=n;i>=1;i--)
	{
		
		for(int k=0;k<cnt;k++)
		{
			printf(" ");
		}
		cnt++;
		for(int j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=2;i<=n;i++)
	{
		
		for(int k=cnt-2;k>0;k--)
		{
			printf(" ");
		}
		cnt--;
		for(int j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
