#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int weight[N], ans[N], st[N];
void li(int x)
{
	st[0] = 1;
	for(int i = 1; i <= 60; i ++ )
	{
		if(st[i - 1] * x < 1e15)
		{
			st[i] = st[i - 1] * x;
		}
	}
}

int quickpow(int res, int ti)
{
	int ans = 1;
	while(ti)
	{
		if(ti & 1)
		{
			if(ti & 1)
			{
				ans *= res;
			}
			res *= res;
			ti >>= 1;
		}
	}
	return ans;
}

int main()
{
	long long k,m,n,p;
	while(~scanf("%lld%lld%lld%lld",&k,&m,&n,&p))
	{
		memset(ans, 0, sizeof(ans));
		li(n);
		for(int i = 0; i < k; i ++ )
		{
			scanf("%lld", &weight[i]);
		}
		sort(weight, weight + k);
		int sum = 1LL * (long long) (quickpow(n, m) - 1) * 1.0 / (n - 1);
		int pos = 1, co = 0;
		for(int i = 0; i < sum - 1; i ++ )
		{
			if(co < st[pos])
			{
				ans[i] = 1LL * (quickpow(n, m - pos) - 1) * 1.0 / (n - 1);
				co ++;
			}
			if(co == st[pos])
			{
				pos ++;
				co = 0;
			}
		}
		int res = 0;
		for(int i = 0; i < sum - 1; i ++ )
		{
			res = (res + weight[i] * ans[i] % p) % p;
		}
		printf("%lld", res);
	}

	return 0;
}
