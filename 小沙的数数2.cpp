#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;

signed main()
{
	int n, m;
	cin >> n >> m;
	n %= mod;
	int ans = 1;
	while (m)
	{
		if (m&1) ans = ans * n % mod;
		m = m>>1;
	}
	cout << ans << endl;
	return 0;
}
