#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
int v[1005];//体积 
int w[1005];//价值
 
int main()
{
	
	int n,m;//n个物品，m是体积 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=0;j<=m;j++)
	 	{
	 		f[i][j]=f[i-1][j];
	 		if(j>=v[i])
	 		{
	 			f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
			 }
		 }
	 }
	 cout<<f[n][m];
	return 0;
}

