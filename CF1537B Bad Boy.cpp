#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int ans1, ans2, ans3, ans4;
		int n, m, x, y; cin >> n >> m >> x >> y;
		int maxn = 0;
		if (x == 1 && y == 1) cout << n << " " << m << " " << n << " " << m << endl;
		else if (x == 1 & y == m) cout << n << " " << 1 << " " << n << " " << 1 << endl;
		else if (x == n & y == m) cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
		else if (x == n & y == 1) cout << 1 << " " << m << " " << 1 << " " << m << endl;
		else if (x == n) cout << 1 << " " << 1 << " " << 1 << " " << m << endl;
		else if (x == 1) cout << n << " " << 1 << " " << n << " " << m << endl;
		else if (y == m) cout << 1 << " " << 1 << " " << n << " " << 1 << endl;
		else if (y == 1) cout << 1 << " " << m << " " << n << " " << m << endl;
		else cout << 1 << " " << 1 << " " << n << " " << m << endl;
	}
	return 0;
}
