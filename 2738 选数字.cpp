#include<bits/stdc++.h>
using namespace std;
int n,m;//1-n,mλ 
bool res[50]={0};
int ans[50]={1};

void dfs(int u)
{
	if(u>m)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=ans[u-1];i<=n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			dfs(u+1);
			res[i]=0;
		}
	}
}


int main( )
{
	cin>>n>>m;
	dfs(1);
	return 0;
}
