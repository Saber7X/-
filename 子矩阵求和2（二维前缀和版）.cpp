#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//³¤¿í
	int num[105][105]={0};
	int sum[105][105]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&num[i][j]);
			sum[i][j]=sum[i-1][j+1]+sum[i][j+1]-sum[i-1][i+1]+num[i][j];
		}
	 } 
	 int q;
	 cin>>q;
	 int a,b,c,d;
	 while(q--)
	 {
	 	cin>>a>>b>>c>>d;
	 	int f=sum[b][d]+sum[a-1][c-1]-sum[a-1][c]-sum[a][c-1];
	 	cout<<f<<endl;
	 }
	return 0;
}
