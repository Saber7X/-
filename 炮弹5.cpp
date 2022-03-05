#include<bits/stdc++.h>
using namespace std;
int mian()
{
	int n,m;
	int num[500005]={0};
	int sum[500005]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		sum[i]=max(sum[i-1],num[i]);
	} 
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		int mid=lower_bound(sum+1,sum+1+n,x)-sum;
		if(mid>n||mid<=1)
		{
			continue;
		}
		num[mid-1]++;
		if(sum[mid-1]<num[mid-1])
		{
			sum[mid-1]=num[mid-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<num[i]<<endl;
	}
	return 0;
}
