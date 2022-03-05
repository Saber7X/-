#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,num[10005]={0},cnt=0,sum[10005]={0};
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		sum[i]=sum[i-1]+num[i];
	}
	int a=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if((sum[j]-sum[i-1])%k==0)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	
	return 0;
}
