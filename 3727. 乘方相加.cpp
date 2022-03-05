#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		map<long long int,long long int> res;
		long long int flag=0;
		long long int n,k;
		cin>>n>>k;
		for(long long int i=1;i<=n;i++)
		{
			long long int x;
			cin>>x;
			if(x==0)
			{
				continue;
			}
			else if(x%k!=0&&x!=1&&x!=0&&k!=0)
			{
				flag=1;
				break;
			}
			else if(res[x]!=0)
			{
				flag=1;
				break;
			}
			res[x]++;
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
		
	}
	return 0;
}
