#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t;//n个愿望，有m元，还剩t分钟
	cin>>n>>m>>t;
	int f[105][105]={1000};
	int maxn=0;
	for(int i=1;i<=n;i++)
	{
	 	int t1,t2;//金钱 ，时间 
	 	cin>>t1>>t2; 
	 	for(int j=m;j>=t1;j--)//金钱
	 	{
	 		for(int k=t;k>=t2;k--)//时间 
	 		{
	 			
	 			f[j][k]=max(f[j][k],f[j-t1][k-t2]+1);//因为是从大到小，所以当前值还是上一个的，没有更新 
			}
		}
	}
	cout<<f[m][t];
	return 0;
}
