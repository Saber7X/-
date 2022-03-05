#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num[105][105];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>num[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>=1;j--)
		{
			cout<<num[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
