#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long int n,num[50005]={0},sum[50005]={0};
	cin>>n;
	for(long long int i=1;i<=n;i++)
	{
		scanf("%lld",&num[i]);
		sum[i]=num[i]+sum[i-1];
	}
	long long 	int cnt=0;
	for(long long int i=0;i<=n;i++)
	{
		for(long long int j=i;j<=n;j++)
		{
			if((sum[j]-sum[i])%7==0)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
