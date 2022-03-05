#include<bits/stdc++.h>
using namespace std;
int n,m;//总和，位数 
int num[100]={0};
void dfs(int u,int x)
{
	if(x<0||u>m)
	{
		return;
	}
	if(u==m&&x==0)
	{
		for(int i=1;i<m;i++)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	for(int i=num[u-1]+1;i<=n;i++)
	{
		num[u]=i;
		dfs(u+1,x-i);
		//num[u+1]=0;
	}
	
}


int main()
{
	cin>>n>>m;
	m+=1;
	dfs(1,n);
	return 0;
 } 
