#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		int n;
		char num[405][405];
		cin>>n;
		int a,b,c,d;
		bool t=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%c",&num[i][j]);
				if(num[i][j]=='*'&&t==0)
				{
					a=i;
					b=j;
					t=1;
				}
				if(num[i][j]=='*'&&t==1)
				{
					c=i;
					d=j;
				}
			}
		}
		if(n==2)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		else
		{
			if(a!=c&&b!=d)
			{
				num[a][d]='*';
				num[c][b]='*';
				
			}
			else if(a==c&&b!=d&&a!=n-1)
			{
				num[a+1][d]='*';
				num[c+1][b]='*';
			}
			else if(a==c&&b!=d&&a==n-1)
			{
				num[a-1][d]='*';
				num[c-1][b]='*';
			}
			else if(a!=c&&b==d&&b!=n-1)
			{
				num[a][d+1]='*';
				num[c][b+1]='*';
			}
			else if(a!=c&&b==d&&b==n-1)
			{
				num[a][d-1]='*';
				num[c][b-1]='*';
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<num[i][j];
				}
				cout<<endl;
			}
		}
	}
		
	return 0;
}
