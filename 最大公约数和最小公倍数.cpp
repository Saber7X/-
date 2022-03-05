#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int lcm(int a,int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	int n,m;//最大公约数，最小公倍数
	cin>>n>>m;
	int sum=n*m;
	int b=sqrt(n*m);
	//cout<<b;
	while(1)
	{
		
		if(sum%b==0)
		{
			int d=sum/b;
			if(gcd(b,d)==n&&lcm(b,d)==m)
			{
				printf("%d",b+d);
				break;
			}
		}
		if(b<n)
		{
			break;
		}
		b--;
	 } 
	return 0;
}
