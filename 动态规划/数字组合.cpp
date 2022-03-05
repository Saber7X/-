#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,m;
	int v[1005]={0};
	int f[1000][1000]m={0,0};
	cin>>n>>m;
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i])
			{
				f[i][j]+=f[i-1][j-v[i]];
			}
		}
	}
	cout<<f[n][m];
	return 0;
 }  
