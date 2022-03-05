#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
bool res[100]={0};
int ans[100];
void dfs(int u)
{
	if(u>n)
	{
		for (int i=1;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
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
