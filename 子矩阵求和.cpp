#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num[101][101];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>num[i][j];
		}
	}
	int q;
	int u,d,l,r;//ÁÐ£¬¿í 
	cin>>q;
	
	while(q--)
	{
		int sum=0;
		cin>>u>>d>>l>>r;
		for(int i=u;i<=d;i++)
		{
			for(int j=l;j<=r;j++)
			{
				sum+=num[i][j];
			}
		 } 
		 cout<<sum<<endl;
	}
	
	return 0;
 } 
