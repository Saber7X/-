#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c;
	scanf("%c %d",&c,&n);
	char a[1000][1000];
	getchar();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%c",&a[i][j]);
			if(a[i][j]!=' ')
			{
				a[i][j]=c;
			}
		}
		getchar();
	}
	int p=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=a[n-i-1][n-j-1])
			{
				p=1;
				break;
			}
		}
	}
	if(p==0)
	{
		printf("bu yong dao le\n");
		for(int i=n-1;i>=0;i--)
		{
			for(int j=n-1;j>=0;j--)
			{
				printf("%c",a[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		for(int i=n-1;i>=0;i--)
		{
			for(int j=n-1;j>=0;j--)
			{
				printf("%c",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
	
} 
