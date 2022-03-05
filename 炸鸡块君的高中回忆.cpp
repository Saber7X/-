#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, m;
		cin >> n >> m;
		if (n == m)
		{
			cout << 1 << endl;
			continue;
		}
		if (m == 1)
		{
			cout << -1 << endl;
			continue;
		}
		int ans = 0;
		while (1)
		{
			int f = n / m;
			ans += f * 2;
			n = f + (n % m);
			
			if (n <= m)
			{
				ans ++;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
