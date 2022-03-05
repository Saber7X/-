#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int sum[100004]={0};
	int ans=-1111;
	int num[100004]={0};
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		sum[i]=sum[i-1]+num[i];
	}
	for(int i=k;i<=n;i++)
	{
		ans=max(ans,sum[i]-sum[i-k]);
	}
	printf("%d\n",ans);
	return 0;
}
