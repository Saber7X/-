#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int v[1000];
	int f[105][105]={0};
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i])
			{
				f[i][j]+=f[i-1][j-v[i]];
			}
			printf("f[%d][%d]=",i,j);
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<f[n][m];
	
}
