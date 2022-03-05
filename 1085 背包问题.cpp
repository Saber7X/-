#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//n件物品，m为背包体积
	int v[10001];
	int w[10001];
	int f[200][200]={0};
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
