#include<bits/stdc++.h>
using namespace std;
long long int num[2005][2005]={0};
long long int sum[2005][2005]={0};
int main()
{
	int n;
	cin>>n;
	int x,y,w;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>w;
		num[x+1][y+1]=num[x+1][y+1]+w;
	}
	
	for(int i=1;i<2005;i++)
	{
		for(int j=1;j<2005;j++)
		{
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+num[i][j];
		}
	}
	int m;
	cin>>m;
	int a,b,c,d;
	int ans;
	while(m--)
	{
		cin>>a>>b>>c>>d;
		a++;b++;c++;d++;
		ans=sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1];
		cout<<ans<<endl;
	}
	return 0;
}
