#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		bool s=0;
		scanf("%d",&n);
		char num[401][401];
		int a,b,c,d;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%c",&num[i][j]);
				if(num[i][j]=='*'&&s==0)
				{
					s=1;
					a=i;
					b=j;
					
				}
				if(num[i][j]=='*'&&s==1)
				{
					c=i;
					d=j; 
				}
			}
		}
		if(n==2)
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					printf("*");
				}
				cout<<endl;
			}
		}
		else if(a==0&&c==0)
		{
			num[a+1][b]='*';
			num[c+1][d]='*';
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%c",num[i][j]);
				}
				printf("\n");
			}
		}
		else if(b==0&&d==0)
		{
			num[a][b+1]='*';
			num[c][d+1]='*';
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%c",num[i][j]);
				}
				printf("\n");
			}
		}
		else if(a==n-1&&c==n-1)
		{
			num[a-1][b]='*';
			num[c-1][d]='*';
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%c",num[i][j]);
				}
				printf("\n");
			}
		}
		else if(b==n-1&&d==n-1)
		{
			num[a][b-1]='*';
			num[c][d-1]='*';
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%c",num[i][j]);
				}
				printf("\n");
			}
		}
		else
		{
			num[a][d]='*';
			num[b][c]='*';
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%c",num[i][j]);
				}
				printf("\n");
			}
		}
		
		
		
	}
	return 0;
}
