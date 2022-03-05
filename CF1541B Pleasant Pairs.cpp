#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,flag=0;
		cin>>n;
		if(n==2)
		{
			cout<<"YES"<<endl;
			continue;
		}
		flag=1;
		if(n%2==0)
		{
			int ff=n/2;
			ff=sqrt(ff);
			if(ff*ff==n/2)
			{
				flag=0;
			}
		}
		if(n%4==0)
		{
			int ff=n/4;
			ff=sqrt(ff);
			if(ff*ff==n/4)
			{
				flag=0;
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
