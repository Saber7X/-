#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,cnt=0;
		cin>>n>>m;
		int num[n+5][m+5];
		int minn=10000;
		if(minn)
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>num[i][j];
				if(num[i][j]<=0)
				{
					cnt++;
					
				}
				minn=min(minn,abs(num[i][j]));
				
			}
		}
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				sum+=abs(num[i][j]);
			}
			
		}
		if(cnt%2==0)
		{
			
			cout<<sum<<endl;
		}
		else
		{
			cout<<sum-2*minn<<endl;
		}
	}
	return 0;
}
