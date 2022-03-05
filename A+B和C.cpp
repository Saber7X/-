#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long long int cnt=1;
	long long int a,b,c;
	scanf("%lld",&n);
	long long int ans[1000006];
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c)
		{
			ans[cnt]=1;
		}
		else
		{
			ans[cnt]=0;
		}
		cnt++;
	}
	for(int i=1;i<cnt;i++)
	{
		if(ans[i]==0)
		{
			printf("Case #%lld: false\n",i);
		}
		else
		{
			printf("Case #%lld: true\n",i);
		}
	}
	return 0;
}
