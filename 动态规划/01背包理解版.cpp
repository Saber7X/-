#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int f[1005][1005]={0};
	int v[1005]={0};//体积 
	int w[1005]={0};//价值 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)//从1开始存入体积和价值 
	{
		cin>>v[i]>>w[i]; 
	}
	
	for(int i=1;i<=n;i++)//枚举用i个物品
	{
		for(int j=0;j<=m;j++)//枚举可用体积 
		{
			
		} 
	} 
	return 0;
 } 
