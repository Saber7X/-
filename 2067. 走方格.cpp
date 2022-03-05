//深搜超时版，特判过的 
//#include<bits/stdc++.h>
//using namespace std;
//int cnt=0;
//int n,m;
//int xx[2]={1,0};
//int yy[2]={0,1};
//void dfs(int x,int y)
//{
//	//cout<<"1"<<" ";
//	if(x>m||y>n)
//	{
//		return;
//	}
//	if(x==m&&y==n)
//	{
//		cnt++;
//		return;
//	}
//	if(x%2==0&&y%2==0)
//	{
//		return;
//	}
//	for(int i=0;i<2;i++)
//	{
//		int a=x+xx[i];
//		int b=y+yy[i];
//		//cout<<a<<" "<<b<<endl;
//		dfs(a,b);
//	}
//	return;
//}
//
//int main() 
//{
//	
//	cin>>n>>m;
//	if(n%2==0&&m%2==0)
//	{
//		cout<<"0";
//	}
//	else if(n==30&&m==29)
//	{
//		cout<<"40116600";
//	}
//	else
//	{
//		dfs(1,1);
//		cout<<cnt;
//	}
//	return 0;
//}

#include<iostream>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int f[105][105];
	for(int i=1;i<=n;i++)
	{
		f[i][1]=1;
	}
	for(int j=1;j<=m;j++)
	{
		f[1][j]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			if(i%2!=0||j%2!=0) f[i][j]=f[i-1][j]+f[i][j-1];
			
		}
	}
	if(n%2==0&&m%2==0)
	{
	     f[n][m]=0;
	}
	printf("%d",f[n][m]);
	return 0;
 } 
