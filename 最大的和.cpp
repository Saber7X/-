#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num[100005]={0};
	int sum[100005]={0};
	int k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		sum[i]=sum[i-1]+num[i];
	}
	int ans=-1000000;
	for(int i=k;i<=n;i++)
	{
	
		ans=max(ans,sum[i]-sum[i-k]);
	}
	printf("%d\n",ans);
	

	return 0;
}
