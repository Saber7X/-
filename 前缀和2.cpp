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
		scanf("%d",&num[i]);
		sum[i]=num[i]-num[i-1];
		printf("%d ",sum[i]);
	}
	return 0;
} 
