#include<bits/stdc++.h>
using namespace std;
const int N=20;
int st[N];//记录状态， 
int n;
int dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			if(st[i]==1)
			{
				printf("%d ",i);
			}
			
		}
		printf("\n");
		return 0;//返回到上一层进行的地方 
	}
	
	st[u]=2;
	dfs(u+1);
	st[u]=0;
	
	st[u]=1;
	dfs(u+1);
	st[u]=0;
	
}

int main()
{
	cin>>n;
	dfs(1);
	return 0;
 } 
