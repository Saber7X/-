#include<bits/stdc++.h>
using namespace std; 
int n,m;

int v[105][105];//组别，重量，价值 
int w[105][105];//组别，价值 
int f[105][105]={0};
bool res[105]={0};
int maxn=-11;
int ans[105];
int s[105];

void dfs(int u)
{
	if(u>n)
	{
		int sum=0;
		for(int i=1;i<=n;i++) 
		{
			sum+=ans[i];
		}
		maxn=max(sum,maxn);
		return;
	}
	
	for(int i=u;i<=n;i++)
	{
		for(int j=1;j<=s[i];j++)
		{
			ans[u]=f[i][j];
			dfs(u+1);
		}
	}
	cout<<maxn;
}

int main()
{
	 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)//组 
	{
		cin>>s[i];
		for(int j=1;j<=s[i];j++)//物品个数 
		{
			cin>>v[i][j]>>w[i][j];

		}
	}
	
	dfs(1);
	
	return 0;
}

