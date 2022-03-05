#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[100][100];
	int res[100]={0};
	int xx,yy;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>num[i][j];
			res[num[i][j]]++;
			if(num[i][j]<0)
			{
				xx=i;
				yy=j;
			}
		}
	}
	int ans;
	for(int i=1;i<=n*n;i++)
	{
		if(res[i]!=1)
		{
			num[xx][yy]=i;
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
	
	int flag=n*(n*n+1)/2;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=n;j++)
		{
			sum+=num[i][j];
		}
		if(sum!=flag)
		{
			cout<<"NO";
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=n;j++)
		{
			sum+=num[j][i];
		}
		if(sum!=flag)
		{
			cout<<"NO";
			return 0;
		}
	}
	int x=1,y=1;
	int sum1=0;
	while(x<=n&&y<=n)
	{
		sum1+=num[x][y];
		x++,y++;
	}
	if(sum1!=flag)
	{
		cout<<"NO";
		return 0;	
	}
	
	x=1,y=n;
	sum1=0;
	while(x<=n&&y>=1)
	{
		sum1+=num[x][y];
		x++,y--;
	}
	if(sum1!=flag)
	{
		cout<<"NO";
		return 0;	
	}
	cout<<"YES";
	return 0;
}
