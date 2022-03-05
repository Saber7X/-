#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int num[10001];
	int sum[10001]={0};
	int x;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum[i]=sum[i-1]+x;
		printf("%d ",sum[i]);
	}
	return 0;
 } 
