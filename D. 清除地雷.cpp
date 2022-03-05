#include<bits/stdc++.h>
using namespace std;
int num[200][200];
int xx[8]={0,1,1,1,0,-1,-1,-1};
int yy[8]={1,1,0,-1,-1,-1,0,1};
void dfs(int x,int y)
{
	num[x][y]={2};
	for(int i=0;i<8;i++)
	{
		int x1=x+xx[i];
		int y1=y+yy[i];
		if(num[x1][y1]==1)
		{
			dfs(x1,y1);
		}
		else
		{
			num[x1][y1]={2};
		}
	}
	return;
}
int main()
{
	int n,m,x,y,flag=0;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%1d",&num[i][j]);
		}
	}
	cin>>x>>y;
	if(num[x][y]==1)
	{
		dfs(x,y);
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<num[i][j];
			
		}
		cout<<endl;
	}
	return 0;
}
