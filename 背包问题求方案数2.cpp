#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n,m;
	int f[10005]={0};
	cin>>n>>m;
	int w[10005];
	int v[10005];
	int g[10505]={1};
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
		for(int j=m;j>=v[i];j--)
		{
			if(f[j]<f[j-v[i]]+w[i])
			{
				g[j]=g[j-v[i]];
				g[j]%=1000000007;
			}
			else if(f[j]==f[j-v[i]]+w[i])
			{
				g[j]+=g[j-v[i]];
				g[j]%=1000000007;
			}
			f[j]=max(f[j],f[j-v[i]]+w[i]);
		}
	}
	cout<<g[m];
	return 0;
}
