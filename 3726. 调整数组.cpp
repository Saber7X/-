#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num[1000],maxn=0;
		int n,t=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
			maxn=max(num[i],maxn);
		}
		if(n==1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		sort(num,num+n);
		for(int i=0;i<=n-1;i++)
		{
			if((maxn-num[i])%2!=0)
			{
				cout<<"NO"<<endl;
				t=1;
				break;
			}
		}
		if(t==0)
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

