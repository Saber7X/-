#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int a[N], sum[N];
signed main()
{
	int n; scanf("%lld", &n);
	int ans = 0;
	
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &a[i]);
		sum[i] = sum[i - 1] + a[i];
		if (a[i] % 7 == 0) ans = 1;
	}
	
	for (int i = n; i >= 2; i -- )
	{
		int l = 1; 
		int r = i;
		while (1)
		{
			if (r > n) break;
			if ((sum[r] - sum[l - 1]) % 7 == 0)
			{
				ans = i;
				break;
			}
			l ++;
			r ++;
		}
		if (ans != 0 && ans != 1) break;
	}
	printf("%lld", ans);
	return 0;
}
