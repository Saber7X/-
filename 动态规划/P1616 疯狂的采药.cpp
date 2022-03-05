//#include<bits/stdc++.h>
//using namespace std;
//const int N=10005;
//
//int main()
//{
//	
//	int n,m;//总时间，草药数量 
//	cin>>n>>m;
//	int v[N];
//	int w[N];
//	int f[N][N]={0};
//	for(int i=1;i<=m;i++)
//	{
//		cin>>v[i]>>w[i];
//	} 
//	for(int i=1;i<=m;i++)
//	{
//		for(int j=0;j<=n;j++)
//		{
//			f[i][j]=f[i-1][j];
//			if(j>=v[i])
//			{
//				f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
//			}
//		}
//	}
//	cout<<f[m][n];
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
const int N=10025;

int main()
{
	
	long long int n,m;//总时间，草药数量 
	cin>>n>>m;
	long long int v[N];
	long long int w[N];
	long long int f[N]={0};
	for(long long int i=1;i<=m;i++)
	{
		scanf("%lld %lld",&v[i],&w[i]);
	} 
	
	for(long long int i=1;i<=m;i++)
	{
		for(long long int j=v[i];j<=n;j++)
		{
		
			f[j]=max(f[j],f[j-v[i]]+w[i]);
		}
	}
	printf("%lld",f[n]);
	return 0;
}
