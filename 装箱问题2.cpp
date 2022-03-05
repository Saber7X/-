#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v;//容量
	int n;//物品件数
	cin>>v>>n;
	int f[200][200]={0}; 
	int num[20005]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=v;j++)
		{
			f[i][j]=f[i-1][j];
			if(num[i]<=j)
			{
				f[i][j]=max(f[i][j],f[i-1][j-num[i]]+num[i]);
			}
		}
		
	}
	cout<<v-f[n][v];
	return 0;
}
