#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,V,M;
	int v;
	int w;
	int m;
	cin>>n>>V>>M;
	int f[105][105]={0};
	for(int i=1;i<=n;i++)
	{
		//体积，重量，价值 
		cin>>v>>m>>w;
		for(int j=V;j>=v;j--)
		{
			for(int k=M;k>=m;k--)
			{
				f[j][k]=max(f[j][k],f[j-v][k-m]+w);
			}
		}
	}
	cout<<f[V][M];
	return 0;
}
