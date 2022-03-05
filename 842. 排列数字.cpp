#include<bits/stdc++.h>
using namespace std;
int n;
bool res[10]={0};
int ans[10];

void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		
			ans[u]=i;
			res[i]=1;
			dfs(u+1);
			res[i]=0;
	
	}
}


int main( )
{
	cin>>n;
	dfs(1);
	return 0;
}
