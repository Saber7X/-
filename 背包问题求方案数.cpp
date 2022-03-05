#include<bits/stdc++.h>
using namespace std;
const int N=105;

int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int v[N];
	long long int w[N];
	long long int f[N][N]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			f[i][j]=f[i-1][j];
			if(v[i]<=j)
			{
				f[i][j]+=max(f[i][j-v[i]],f[i][j]);
			}
			
		}
	}
	cout<<f[n][m];
	
	return 0;
}
