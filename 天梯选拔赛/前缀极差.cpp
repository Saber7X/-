#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;int cnt=1;
	int n1[100001]={0},q1[100001]={0},ans[100001];
	scanf("%d %d",&n,&q);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&n1[i]);
	}
	for(int i=1;i<=q;i++)
	{
		scanf("%d",&q1[i]);
	}
	for(int i=1;i<=q;i++)
	{
		
			sort(n1,n1+q1[i]+1);
			ans[cnt]=n1[q1[i]]-n1[1];
			cnt++;
	
	}
	for(int i=1;i<cnt;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
}
