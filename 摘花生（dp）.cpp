#include<bits/stdc++.h>
using namespace std;
const int N=200;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int num[N][N]={0};
		long long int f[N][N]={0};
		long long int n=0,m=0;
		cin>>n>>m;
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=1;j<=m;j++)
			{
				cin>>num[i][j];
				
			}
		}
		//cout<<endl;
		
		for(long long int i=1;i<=m;i++)
		{
			f[1][i]=f[1][i-1]+num[1][i];
			//cout<<f[1][i]<<" ";
		}	
		//cout<<endl;
		for(long long int i=1;i<=n;i++)
		{
			f[i][1]=f[i-1][1]+num[i][1];
			//cout<<f[i][1]<<" ";
		}
		//cout<<endl;
		for(long long int i=2;i<=n;i++)
		{
			for(long long int j=2;j<=m;j++)
			{
				f[i][j]=max(f[i-1][j],f[i][j-1])+num[i][j];
			}
		}
		cout<<f[n][m]<<endl;
		//cout<<endl;
	}
	return 0;
}
