#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 150;
int a[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, l ,r, k;
		cin >> n >> l >> r >> k;
		
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		sort(a + 1, a + 1 + n);
		int sum = 0, ans = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (a[i] >= l && a[i] <= r)
			{
				sum += a[i];
				if (sum > k) break;
				ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
