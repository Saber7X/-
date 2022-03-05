#include<bits/stdc++.h>
using namespace std;
int n;
bool res[15]={0};//״̬ 
int ans[15];
void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d ",ans[i]);
		}
		printf("\n");
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
	scanf("%d",&n);
	dfs(1);
	return 0;
}
