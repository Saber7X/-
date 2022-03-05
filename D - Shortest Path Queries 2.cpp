#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n,m,num[450][450]={0},path[450][450]={0},sum=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		num[a][b]=c;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(num[i][j]>num[i][k]+num[k][j])
				{
					num[i][j]=num[i][k]+num[k][j];
					path[i][j]=k;
					sum+=k;
				}
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
