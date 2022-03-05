#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	int ll=n/2;
	if(n%2!=0)
	{
		ll=n/2+1;
	}
	int cnt=0;
	for(int i=1;i<=n-1;i++)
	{
		if(i*i%n<ll)
		{
			//cout<<i<<endl;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
