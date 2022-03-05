#include<bits/stdc++.h> 
using namespace std;
int n;
int res[100],ans[100];
void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			dfs(u+1);
			res[i]=0;
		}
	}
	return ;
}
int main()
{
	
	cin>>n;
	dfs(1);
	
	return 0;
}
