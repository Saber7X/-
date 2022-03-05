#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i ++ )
	{
		int a, b, c; cin >> a >> b >> c;
		if (a + b > c)
		{
			cout << "Case #" << i << ": true" << endl;
		}
		else
		{
			cout << "Case #" << i << ": false" << endl;
		}
	}
	return 0;
}