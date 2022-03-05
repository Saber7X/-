#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int lcm(long long int a,long long int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	long long int n,m;//最大公约数，最小公倍数
	cin>>n>>m;
	long long int sum=n*m;
	long long int b=sqrt(n*m)+2;
	//cout<<b;
	long long int cnt=0;
	
	while(1)
	{
		
		if(sum%b==0)
		{
			int d=sum/b;
			if(gcd(b,d)==n&&lcm(b,d)==m)
			{
				cnt++;
			}
		}
		if(b<n)
		{
			break;
		}
		b--;
	 } 
	 cnt*=2;
	 if(b*b==sum)
	{
		cnt--;
	}
	cout<<cnt;
	return 0;
}
