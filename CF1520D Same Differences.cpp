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
			cnt+=res[num[i]];//��ǰ����ӣ��������-i��������ֵĴ���++����һ�����㣬������һ��д�����棬����ֻҪ�������������ǰ��õ����ͻ�������������һ�Σ����Լ�������ĵ�ǰ��������++ 
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
