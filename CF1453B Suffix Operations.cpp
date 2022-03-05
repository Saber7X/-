#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int a[n + 10];
		int b[n + 10] = {0};
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		int sum = 0;
//		int ans = 0x3f3f3f3f;
		for (int i = 2; i <= n; i ++ )
		{
			b[i - 1] = abs(a[i] - a[i - 1]);
			sum += b[i - 1];
		}
		int ans = sum;
		for (int i = 1; i < n - 1; i ++ )
		{
			ans = min(ans, sum - b[i] - b[i + 1] + abs(a[i] - a[i + 2]));
		}
		ans = min(ans, sum - b[1]);
		ans = min(ans, sum - b[n - 1]);
		cout << ans << endl;
	}
	return 0;
}
