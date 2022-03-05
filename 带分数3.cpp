#include<bits/stdc++.h>
using namespace std;
int n;
bool res[101]={0};
int ans[101];

void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=9;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=1;i<=9;i++)
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
	scanf("%d",&n);
	dfs(1);
	return 0;
}
