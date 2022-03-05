#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//氮氧的需要的量
	int f[500][500]={0};
	cin>>n>>m;
	int d[1005];
	int y[1005];
	int w[1005];//气缸重量 
	int k;//气缸数量
	for(int i=1;i<=k;i++) 
	{
		cin>>d[i]>>y[i]>>w[i]; 
	}
	int minn=-999;
	for(int i=1;i<=n;i++)
	{
		for(int j=d[i];j<=n;j++)
		{
			for(int k=y[i];k<=m;k++)
			{
				minn=min(f[j][k],f[j+d[i]][k+y[i]]+w[i]);
			}
		}
	}
	cout<<minn;
	return 0;
}
