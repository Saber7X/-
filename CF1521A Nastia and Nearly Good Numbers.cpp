//a+a*(b-1)==a*b，乘法分配律，这样x,y肯定不是a*b的倍数 
//如果a，b相等||b==1则肯定不对，输出NO
//如果b==2,则直接扩大几倍即可
//然后直接按照 a+a*(b-1)==a*b 输出即可 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		if(b==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			if(b==2)
			{
				b*=3;
			}
			cout<<a*(b-1)<<" "<<a<<" "<<a*b<<endl;
		}
	}
	return 0;
}
