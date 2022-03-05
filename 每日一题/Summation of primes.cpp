#include<bits/stdc++.h>
using namespace std;
const long long int n=2000000;
long long int cnt;
long long int prime[n];
bool res[n]={0};
void findprime()
{
	for(long long int i=2;i<=n;i++)
	{
		if(res[i]==0)
		{
			prime[cnt++]=i;
			cout<<prime[cnt-1]<<" ";
			for(long long int j=i*i;j<=n;j+=i)
			{
				res[j]=1;
			}
		}
	}
}

int main()
{
	findprime();
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		if(prime[i]>=2000000)
		{
			break;
		}
		sum+=prime[i];
	}
	cout<<sum;
	return 0;
}
