#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int x, y;
		cin >> x >> y;
		if (x == y) cout << x << endl;
		else if (x > y) cout << x + y << endl;
		else if (x < y) cout << y % x / 2 + y / x * x << endl;
	}
	return 0;
}
