#include<iostream>
using namespace std;
const int N=10;
char num[N][N];
int cnt;
int n,m;
void dfs(int x,int y,int u)
{
	if(u==0)
	{
		cnt++;
		return;
	}
	for(int i=x;i<=n;i++)
	{
		for(int j=y;j<=n;j++)
		{
			if(num[i][j]=='#')
			{
				int a=i;
				int b=j;
				bool t=0;//用来判断该点是否可放棋子 
				while(a>=1&&a<=n&&b>=1&&b<=n&&t==0)
				{
					a++;
					if(num[a][b]=='*')
					{
						t=1;
						break;
					}
				}
				
				a=i;
				b=j;
				while(a>=1&&a<=n&&b>=1&&b<=n&&t==0)
				{
					a--;
					if(num[a][b]=='*')
					{
						t=1;
						break;
					}
				}
				
				a=i;
				b=j;
				while(a>=1&&a<=n&&b>=1&&b<=n&&t==0)
				{
					b++;
					if(num[a][b]=='*')
					{
						t=1;
						break;
					}
				}
				
				a=i;
				b=j;
				while(a>=1&&a<=n&&b>=1&&b<=n&&t==0)
				{
					b--;
					if(num[a][b]=='*')
					{
						t=1;
						break;
					}
				}
				
				if(t==0)
				{
					num[i][j]='*';
					dfs(i+1,1,u-1);
					num[i][j]='#';
				}
			}
		}
	}
}
int main()
{
	
	while(cin>>n>>m)
	{
		cnt=0;
		int xx,yy;
		bool t=0;
		if(n==-1&&m==-1)
		{
			break;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>num[i][j];
				if(num[i][j]=='#'&&t==0)
				{
					xx=i;
					yy=j;
					t=1;
				}
			}
		}
		/*for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<num[i][j];
			}
			cout<<endl;
		}*/
		dfs(xx,yy,m);
		cout<<cnt<<endl;
	}
	
}
