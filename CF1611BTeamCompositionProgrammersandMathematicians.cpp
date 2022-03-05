#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int a, b;
		cin >> a >> b;
		if (a > b) swap(a, b);
		if (a * 3 < b) cout << a << endl;
		else cout << (a + b) / 4 << endl;
	}
	return 0;
}
