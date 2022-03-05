#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int x, a, b;
	cin >> x >> a >> b;
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.length(); i ++ )
	{
		if (s[i] == '1' && x - a >= 0)
		{
			ans ++;
			x -= a;
		}
		else x += b;
	}
	cout << ans << endl;
	return 0;
}
