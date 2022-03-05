#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int num[100005]={0};
	for(long long int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	long long int sum=0;
	long long int sumn;
	for(long long int i=0;i<n;i++)
	{
		sum+=num[i];
		sumn+=sum*num[i+1];
	}
	cout<<sumn;
	return 0;
}
