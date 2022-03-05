#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//体积，数量 
	cin>>n>>m;//体积，数量
	int v[101000]={0};
	int f[100000]={0};
	for(int i=1;i<=m;i++)
	{
		cin>>v[i];
	}
	//把全都记录下来优化成只记录上一层的 
	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>=v[i];j--)
		{
			
				f[j]=max(f[j],f[j-v[i]]+v[i]);
		}
	}
	cout<<n-f[n];
	 
	return 0;
 } 
