#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y,cnt=0;
		cin>>n>>m>>x>>y;
		if(x*2<=y)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
				{
					char a;
					cin>>a;
					if(a=='.') 
					{
						cnt++;
					}
				}
			}
			cout<<x*cnt<<endl;
		}
		else
		{
			int cnt1=0,ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
				{
					char x;
					cin>>x;
					if(x=='.')
					{
						cnt++;
					}
					if(x=='*'||j==m)
					{
						ans+=(cnt/2);
						cnt1+=(cnt%2);
						cnt=0;
					}
				}
			}
			//cout<<ans<<" "<<cnt1<<endl; 
			cout<<cnt1*x+ans*y<<endl;
		}
	}
	return 0;
}

