#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n=4,m=4;//个数，总和
	int v[1005]={0};
	int f[105][105]={0};
	f[0][0]=1;
	//cin>>n>>m; 
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
			cout<<"f["<<i<<"]"<<"["<<j<<"]"<<"="<<f[i][j]<<"  ";
		}
		cout<<endl;
	}
	/*for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<f[n][m];
	return 0;
}
