#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; scanf("%lld", &n);
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%lld", &a[i]);
		}
		if (n == 1)
		{
			printf("%lld\n", a[1]);
			continue;
		}
		sort (a + 1, a + 1 + n);
		int maxn = -1e9 - 7;
		a[0] = 0;
		for (int i = 1; i <= n; i ++ )
		{
			maxn = max(maxn, a[i] - a[i - 1]);
		}
		printf("%lld\n", maxn);
	}
	return 0;
}
