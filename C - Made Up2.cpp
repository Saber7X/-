#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int res[100005]={0};
	for(long long int i=1;i<=n;i++)
	{
		long long int x;
		cin>>x;
		res[x]++;
	}
	long long int b[100005];
	for(long long int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	long long int sum=0;
	for(long long int i=0;i<n;i++)
	{
		long long int x;
		cin>>x;
		sum+=res[b[x]];
	}
	cout<<sum;
	return 0;
}
