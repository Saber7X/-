#include<bits/stdc++.h>
using namespace std;
int n;
int a[100],b[100],c[100],d[100];
char num[20][20];
void dfs(int x,int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<num[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0&&b[i-u+n]==0&&c[u+i]==0)
		{
			num[u][i]='Q';
			a[i]=1,b[i-u+n]=1,c[u+i]=1;
			dfs(x+1,u+1);
			num[u][i]='.';
			a[i]=0,b[i-u+n]=0,c[u+i]=0;
		}
	}
}
int main()
{
	cin>>n;	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			num[i][j]='.';
		}
	}
	dfs(1,1);
	return 0;
}
