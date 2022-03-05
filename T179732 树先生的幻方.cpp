#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[100][100];
	int res[100]={0};
	int xx,yy;
	int k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>num[i][j];
			if(num[i][j]<0)
			{
				xx=i;
				yy=j;
				continue;
			}
			res[num[i][j]]++;
		}
	}
	for(int i=1;i<=n*n;i++)
	{
		if(res[i]==0)
		{
			num[xx][yy]=i;
			res[i]=1;
		}
	}
	cout<<num[xx][yy]<<endl;
	k=n*(n*n+1)/2;
	
	//ĞĞ
	int sum=0;
	for(int i=1;i<=n;i++) 
	{	
		sum=0;
		for(int j=1;j<=n;j++)
		{
			sum+=num[i][j];
		}
		if(sum!=k)
		{
			cout<<"NO";
			return 0;
		}
	}
	
	//ÁĞ
	for(int i=1;i<=n;i++) 
	{
		sum=0;
		for(int j=1;j<=n;j++)
		{
			sum+=num[j][i];
		}
		if(sum!=k)
		{
			cout<<"NO";
			return 0;
		}
	}
	
	int x=1,y=1;
	sum=0;
	while(x<=n&&y<=n)
	{
		sum+=num[x][y];
		x++,y++;
	}
	if(sum!=k)
	{
		cout<<"NO";
		return 0;
	}
	
	x=1,y=n;
	sum=0;
	while(x<=n&&y>=1)
	{
		sum+=num[x][y];
		x++,y--;
	}
	if(sum!=k)
	{
		cout<<"NO";
		return 0;
	}
	
	cout<<"YES";
	return 0;
}
