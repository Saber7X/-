#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(long long int a,long long int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	long long int x,y;
	cin>>x>>y;
	int cnt=0;
	long long int sum=x*y;
	for(int i=x;i<=y;i++)
	{
		if(sum%i==0)
		{
			if(gcd(i,sum/i)==x&&lcm(i,sum/i)==y)
			{
				cnt++;
			}
		}
		
	}
	printf("%d",cnt);
	return 0;
}
