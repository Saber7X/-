#include<bits/stdc++.h> 
#define ll long long int
const ll N =10005;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll num[N]={0};
		ll num1[N]={0};
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		sort(num,num+n);
		ll flag=num[n-1]-num[0];
		ll cnt=0;
		for(int i=0;i<n;i++)
		{
			if(abs(num[i])>=flag)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
