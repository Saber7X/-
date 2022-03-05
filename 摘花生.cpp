#include<bits/stdc++.h>
using namespace std;
const int N=105;
int xx[2]={1,0};
int yy[2]={0,1};
int f[N][N]={0};
int num[N][N]={0};
int n,m;
int maxn=-111;
void dfs(int x,int y,int sum)				
{
	
	if(x==n&&y==m)
	{
		maxn=max(sum, maxn);
		cout<<maxn;
		return;
	}
	if(x==n&&y==0)
	{
		return;
	}
	if(x==0&&y==m)
	{
		return;
	}
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int k=0;k<2;k++)
			{
				dfs(x+xx[i],y+yy[i],sum+num[x+xx[i]][y+yy[i]]);
			}
		}
	}
	
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		maxn=-141;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>num[i][j];
			}
		}
		dfs(1,1,num[1][1]);
		cout<<maxn<<endl;
		
	}
	return 0;
}
