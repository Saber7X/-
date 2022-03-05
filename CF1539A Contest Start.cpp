#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int k;
	cin>>k;
	while(k--)
	{
		long long int n,x,t;
		cin>>n>>x>>t;
		if(x>t||n==1)
		{
			cout<<"0"<<endl;
			continue;
		}
		else if(x==t)
		{
			cout<<n-1<<endl;
		}
		else
		{
			long long int sum=0;
			long long int flag=t/x,ss=t%x;
			if(n<flag)// 
			{
				cout<<(1+n-1)*(n-1)/2<<endl;
				continue;
			}
			sum=(n-flag)*flag;
			sum+=(1+flag-1)*(flag-1)/2;
			printf("%lld\n",sum);
			//cout<<sum<<endl;
		}
	}
}
//1999999999000000000
//1999999999000000000
