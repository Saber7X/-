#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long long int num[200005];
	long long int cnt=0;
	cin>>n;
	for(long long int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(long long int i=1;i<=n;i++)
	{
		for(long long int j=i+1;j<=n;j++)
		{
			if(abs(num[i]-num[j])%200==0)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
