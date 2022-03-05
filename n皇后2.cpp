#include<bits/stdc++.h>
using namespace std;
int n;
char num[100][100];

void dfs(int x,int y,int u)
{
	if(u==0)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<num[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}
	
	for(int i=x;i<=n;i++)
	{
		for(int j=y;j<=n;j++)
		{
			if(num[i][j]=='.')
			{
				bool t=0;
				
				int a=i;
				int b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					a++;
					
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					a--;
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					b++;
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					b--;
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					a++;
					b++;
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					a--;
					b--;
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					a++;
					b--;
				}
				
				a=i;
				b=j;
				while(t==0)
				{
					if(a<=0||a>n||b<=0||b>n)
					{
						break;
					}
					if(num[a][b]=='Q')
					{
						t=1;
						break;
					}
					a--;
					b++;
				}
				
				if(t==0)
				{
					num[i][j]='Q';
					dfs(i+1,1,u-1);
					num[i][j]='.';
				}
				
			}
		}
	}
	
}




int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			num[i][j]='.';
		}
	}
	dfs(1,1,n);
	return 0;
}
