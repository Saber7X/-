#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int r,b,d;
	for(long long int k=0;k<n;k++)
	{
		cin>>r>>b>>d;
		int minn=min(r,b);
		int maxn=max(r,b);
		
		if(abs(r-b)<=d)
		{
			cout<<"YES"<<endl;
			continue;
		}
		maxn=maxn/minn+maxn%minn;
		if(maxn-1<=d)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
