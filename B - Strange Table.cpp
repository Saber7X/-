#include<iostream>
#include<algorithm>
#include<cstring>
#define ll long long int
using namespace std;
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int a,b,c;
		cin>>a>>b>>c;
		ll int x,y;
		if(a*b==c)
		{
			cout<<c<<endl;
		}
		else
		{
			if(c%a==0)
			{
				x=a;
				y=c/a;
			}else{
				y=c/a+1;
				x=c%a;
			}
			ll int ans=b*(x-1)+y;
			cout<<ans<<endl;
		}
	}
	return 0;
}
