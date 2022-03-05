#include<iostream>
#include<algorithm>
#include<cstring>
const int N=105;
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int num[N][N]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>num[i][j];
		}
	}
	int sum[N][N]={0};
	for(int i=1;i<=n;i++)
	{
		sum[i][1]=num[i][1]+sum[i-1][1];
	}
	for(int i=1;i<=m;i++)
	{
		sum[1][i]=num[1][i]+sum[1][i-1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			sum[i][j]=sum[i-1][j]+sum[i][j-1]+num[i][j]-sum[i-1][j-1];
		}
	}
//	cout<<endl;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout<<sum[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	while(k--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int ans=sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1];
		cout<<ans<<endl;
	}

	
	return 0;
}
