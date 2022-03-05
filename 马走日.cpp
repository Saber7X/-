#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int n,m;
bool res[100][100]={0};
int xx[8]={-1,1,2,2,1,-1,-2,-2};
int yy[8]={2,2,1,-1,-2,-2,-1,1};


void dfs(int x,int y,int u)
{
	res[x][y]=1;
	if(u==n*m)//就是等于 
	{
		cnt++;
		return;
	}
	for(int i=0;i<8;i++)
	{
		int a=xx[i]+x,b=yy[i]+y;
		if(res[a][b]==0&&a>=0&&a<n&&b>=0&&b<m)//错误点1：n对应x,m对应y 
		{
			res[a][b]=1;
			dfs(a,b,u+1);
			res[a][b]=0;
		}
	}
	return;//可以return; 
	
	
}

int main()
{
	int t;//测试数据 
	cin>>t;
	while(t--)
	{
		memset(res,0,sizeof(res));
		int x,y;
		cnt=0;
		cin>>n>>m>>x>>y;
		dfs(x,y,1);
		cout<<cnt<<endl;
	} 
	return 0;
}


