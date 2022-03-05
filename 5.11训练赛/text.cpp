#include<bits/stdc++.h>
using namespace std;
int num[3]={1,2,3};
bool res[10]={0};
int ans[10];
int n=3;
void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<ans[i];
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
	
	dfs(1);
	return 0;
}
