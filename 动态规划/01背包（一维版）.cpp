#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//n件物品，m为背包体积
	int v[10001];
	int w[10001];
	int f[200]={0};
	
	cin>>n>>m; 
	 
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	 } 
	 cout<<endl;
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=m;j>=v[i];j--)
	 	{
	 		
	 		//cout<<f[j]<<" "<<f[j-v[i]]+w[i]<<endl;
	 		
	 		
	 			f[j]=max(f[j],f[j-v[i]]+w[i]);
	 			//f[i][j]=max(f[i][j],f[i1][j-v[i]]+w[i])
			 
	 		
		 }
	 }
	 cout<<f[m];
	return 0;
}
