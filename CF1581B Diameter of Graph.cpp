#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, m, k;
		cin >> n >> m >> k;
		bool f = 0;
		if (n == 1 && m == 0 && k >= 2) f = 1;
		if (m < (1 + n - 1) * (n - 1) / 2 && m >= n - 1 && k >= 4) f = 1;
		if (m == (1 + n - 1) * (n - 1) / 2 && k >= 3) f = 1;
		
		if (f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
