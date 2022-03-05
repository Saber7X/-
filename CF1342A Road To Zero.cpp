#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		long long int sum=0;
		if(x>0)
		{
			sum+=x*a;
		}
		else if(x<0)
		{
			sum+=x*b;
		}
		if(y>0)
		{
			sum+=y*a;
		}
		else if(y<0)
		{
			sum+=y*b;
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
