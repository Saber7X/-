//如果不按字典序小的在前面
/* 
#include<bits/stdc++.h>
using namespace std;
int n,m;//范围，位数 
int res[100]={0};
int ans[100];

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
	for(int i=1;i<=n;i++)//因为不用字典序，所以只要从一开始，找没用过的就好了 
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
	cin>>n>>m;
	dfs(1);
	return 0;
}
*/

//按字典序排序 
#include<bits/stdc++.h>
using namespace std;
int n,m;//范围，位数 
int res[100]={0};
int ans[100]={1};//因为是从1开始，所以都赋值为1； 

void dfs(int u)
{
	
	if(u>m)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;return;
	 }
	
		
	//模板 
	for(int i=ans[u-1];i<=n;i++)//因为要用字典序，所以从上一个用过的数开始遍历 
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
	cin>>n>>m;
	dfs(1);
	return 0;
}
