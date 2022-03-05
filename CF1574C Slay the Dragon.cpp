#include<bits/stdc++.h> 
#define int long long
using namespace std;

const int N = 2e5 + 10;
int a[N];

signed main()
{
	int n, sum = 0; cin >> n;
	for (int i = 1; i <= n; i ++ ) { scanf("%lld", &a[i]); sum += a[i]; }
	
	sort(a + 1, a + 1 + n);
	
	int q; cin >> q;
	
	while (q -- )
	{
		int ans = 9999999999999999;
		int x, y; scanf("%lld%lld", &x, &y);
		int f = lower_bound(a + 1, a + 1 + n, x) - a;
//		cout << f << endl;

		if (a[f] >= x)
		{
			if (f != 1)//不是第一个比较选大的或者选小的结果 
			{
				ans = min(x - a[f - 1] + max(0ll, y -(sum - a[f- 1])), max(x - a[f], 0ll) + max(0ll, y -(sum - a[f])));
				cout << ans << endl;
			}
			else //是第一个，只能选这一个
			{
				ans = max(0ll, y - (sum - a[f]));
				cout << ans << endl;
			 } 
		}
		else
		{
			f --;
			ans = x - a[f] + max(0ll, y - (sum - a[f]));
			cout << ans << endl;
		}
	}
	return 0;
}
