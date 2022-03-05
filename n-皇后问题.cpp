#include<bits/stdc++.h>
using namespace std;
int n;
const int N=50;
char num[N][N];


void dfs(int x,int y,int u)
{
	if(u==0)
	{
		for(int i=x;i<=n;i++)
		{
			for(int j=y;j<=n;j++)
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
				int x=i;
				int y=j;
				while(x<=n)
				{
					x++;
					if(num[x][y]=='Q')
					{
						t=1;
						break;
					}
				}
				while(x>0)
				{
					x--;
					if(num[x][y]=='Q')
					{
						t=1;
						break;
					}
				}
				while(y<=n&&t==0)
				{
					y++;
					if(num[x][y]=='Q')
					{
						t=1;
						break;
					}
				}
				while(y>0&&t==0)
				{
					y--;
					if(num[x][y]=='Q')
					{
						t=1;
						break;
					}
				}
				while(y<=n&&x<=n&&t==0)
				{
					y--;
					x++;
					if(num[x][y]=='Q')
					{
						t=1;
						break;
					}
				}
				while(y>0&&x>0&&t==0)
				{
					y++;
					x--;
					if(num[x][y]=='Q')
					{
						t=1;
						break;
					}
				}
				if(t==0)
				{
					num[i][j]='Q';
					dfs(x,y,u-1);
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
