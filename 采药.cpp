#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//ʱ�䣬��Ŀ 
	cin>>n>>m;
	int v[1005];//��� 
	int w[1005];//��ֵ 
	int f[1005][1005]={0};
	 for(int i=1;i<=m;i++)
	 {
	 	cin>>v[i]>>w[i]; 
	 }
	 for(int i=1;i<=m;i++)
	 {
	 	for(int j=0;j<=n;j++)
	 	{
	 		f[i][j]=f[i-1][j];
	 		if(j>=v[i])
	 		{
	 			f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
			 }
		 }
	 }
	cout<<f[m][n];
	return 0;
} 
