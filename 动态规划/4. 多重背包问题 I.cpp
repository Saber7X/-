#include<bits/stdc++.h>
using namespace std;
const int N=105;
int main() 
{
	int n,m;
	cin>>n>>m;
	int v[N],w[N],s[N];//体积，价值，重量
	int f[N][N]={0};
	for(int i=1;i<=n;i++) 
	{
		cin>>v[i]>>w[i]>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k<=s[i];k++)
			{
				if(k*v[i]<=j)
				{
					f[i][j]=max(f[i][j],f[i-1][j-k*v[i]]+w[i]*k);
				}
				
			}
		}
	}
	cout<<f[n][m];
	return 0;
}
