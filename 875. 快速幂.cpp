#include<iostream> 
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n--)
	{
		long long int a,b,p;
		cin>>a>>p>>i;
		long long int sum=1;
		for(long long int i=1;i<=b;i++)
		{
			sum*=a;
		}
		sum%=p;
		cout<<sum<<endl;
	}
	return 0; 
}
