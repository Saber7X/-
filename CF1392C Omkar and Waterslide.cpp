#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int a[n + 10] = {0};
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		int ans = 0;
		for (int i = 2; i <= n; i ++ )
		{
			if (a[i] < a[i - 1])
			{
				ans += (a[i - 1] - a[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
