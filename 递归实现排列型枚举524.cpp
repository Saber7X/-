#include<bits/stdc++.h>
using namespace std;
int n;
int ans[100];
bool res[100]={0};

void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
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
	
	
}

int main()
{
	cin>>n;
	dfs(1);
	return 0;
}
