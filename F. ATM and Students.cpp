#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int sum[N] = {0};
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		sum[0] = 0;
		int x;
		int n, s; scanf("%lld%lld", &n, &s);
		
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%lld", &x);
			sum[i] = sum[i - 1] + x;
		}
		
		int l = 1, r = 1, maxn = -1;
		int ll = 0, rr = 0;
		 
		while (1)
		{
			int a = sum[r] - sum[l - 1];
			if (r > n || l > n) break;
			
			if (s + a < 0) 
			{
				l ++;
				if (l > r) r = l;
				continue;
			}
			if (s + a >= 0) 
			{
				if (r - l + 1 > maxn)
				{
					maxn = r - l + 1;
					ll = l;
					rr = r;
				}
				r++;
			}
		}
		if ((maxn == 1 && s + sum[rr] - sum[ll - 1] < 0 )|| (ll == rr && rr == 0)) puts("-1");
		else printf("%lld %lld\n", ll, rr);
	}
	return 0;
}
