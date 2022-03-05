#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,h;
	long long int a[100000000005];
	scanf("%lld %lld %lld",&n,&k,&h);
	long long int i,j,m;
	long long int sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		m=a[i];
		while(m<k)
		{
			m+=h;
			sum+=h;
		}
		
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%lld",sum+h);
	return 0;
}

