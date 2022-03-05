#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
int gcd(ll int a,ll int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main()
{
	ll int n;
	cin>>n;
	while(n--)
	{
		ll int m;
		cin>>m;
		
		while(1)
		{
			ll int sum=0;
			ll int x=m;
			while(x>0)
			{
				sum+=x%10;
				x/=10;
			}
			int a=gcd(m,sum);
			if(a==1)
			{
				m++;
			}
			else
			{
				cout<<m<<endl;
				break;
			}
			
		}
		
	}
	return 0;
}
