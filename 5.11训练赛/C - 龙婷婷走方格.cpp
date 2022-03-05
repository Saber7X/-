#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int f[1005][1005]={0};
	f[1][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			
			f[i][j]=f[i-1][j]+f[i][j-1];
			f[i][j]%=1000000007;//每个数都除余； 
		}
	}
	printf("%d",f[n][m]);
	return 0;
}
