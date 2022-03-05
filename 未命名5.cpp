#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int sum,a,b;
	long long int t;
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>sum>>a>>b;
		double x=double(a)/2.0;
		double y=double(b)/3.0;
		if(x>=y)
		{
			t=sum/3;
			ans=t*b;
			if(b%3!=0)
			{
				if(a>=b)
				{
					ans+=b;
				}else{
					ans+=a;
				}
			}
		}else{
			t=sum/2;
			ans=t*a;
			if(a%2!=0)
			{
				if(a>=b)
				{
					ans+=b;
				}else{
					ans+=a;
				}
			}
		}
		cout<<ans;
		if(i!=n-1)
		{
			cout<<endl;
		}
	}
	return 0;
}
