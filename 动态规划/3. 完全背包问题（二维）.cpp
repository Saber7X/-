#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int v[1005];
	int w[1005];
	int f[1005][1006]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k*v[i]<=j;k++)
			{
				f[i][j]=max(f[i][j],f[i-1][j-v[i]*k]+w[i]*k);
			}
			
		}
	}
	cout<<f[n][m];
	return 0;
}
