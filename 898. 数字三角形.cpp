//#include<bits/stdc++.h>
//using namespace std;
//const int N=510,INF=0x3f3f3f3f;
//int f[N][N];
//int a[N][N];
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=0;j<=i+1;j++)
//		{
//			f[i][j]=-INF;
//		}
//	}
//	
//	f[1][1]=a[1][1];
//	for(int i=2;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			f[i][j]=a[i][j]+max(f[i-1][j-1],f[i-1][j]);
//		}
//	}
//	
//	int maxn=-INF;
//	for(int i=1;i<=n;i++)
//	{
//		maxn=max(maxn,f[n][i]);
//	}
//	cout<<maxn;
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

const int N=510,inf=0x3f3f3f3f;
int f[N][N]={-inf,-inf};
int a[N][N];
int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			f[i][j]=-inf;
		}
	}
	
	f[1][1]=a[1][1];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			f[i][j]=a[i][j]+max(f[i-1][j-1],f[i-1][j]);
		}
	}
	
	int maxn=-inf;
	for(int i=1;i<=n;i++)
	{
		maxn=max(maxn,f[n][i]);
	}
	cout<<maxn;
	return 0;
}
