#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,num[100005]={0},ans=0;
		cin>>n;
		for(long long int i=1;i<=n;i++)
		{
			cin>>num[i];
		}
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=num[i]-1;j<=n;j+=num[i])
			{
				if(j>i&&(num[i]*num[j]==i+j))
				{
					ans++;
					cout<<i<<" "<<j<<" "<<num[i]<<" "<<num[j]<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
