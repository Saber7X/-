#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;

//ai-i==aj-j && i<j
 
	while(t--)
	{
		ll num[200005]={0};
		ll n,cnt=0;
		cin>>n;
		map<ll,ll> res;
		for(ll i=1;i<=n;i++)
		{
			cin>>num[i];
			num[i]-=i;
			cnt+=res[num[i]];//从前往后加，把这个数-i后的数出现的次数++，第一个不算，所以这一步写在上面，后面只要出现了这个数，前面得到数就会与这个数都组合一次，所以加这个数的当前次数，再++ 
			res[num[i]]++;
			
		}
		
		cout<<cnt<<endl;
		
	}
	return 0;
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,cnt=0;
		cin>>n;
		ll num[2*n+1]={0};
		ll res[2*n+1]={0};
		
		
		for(ll i=1;i<=n;i++)
		{
			cin>>num[i];
			num[i]-=i;
			cnt+=res[num[i]+n];
			res[num[i]+n]++;
			
		}
		
		cout<<cnt<<endl;
		
	}
	return 0;
}
