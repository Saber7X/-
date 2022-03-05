#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; scanf("%lld", &n);
		string s; cin >> s;
		int pos[n + 10], cnt = 0;
		bool f = 0;
		for (int i = 0; i < n; i ++ )
		{
			if (s[i] == '*')
			{
				pos[++cnt] = i + 1; 
			}
			if (s[i] == '.') f = 1;
		}
		if (!f || cnt == 0 || cnt == 1) 
		{
			cout << "0" << endl;
			continue;
		}
		int ans = 0;
		int mid = cnt / 2 + 1;
		for (int i = 1; i <= cnt; i ++ )
		{
			if (i == mid)
			{
				continue;
			}
			ans = ans + abs(pos[mid] - pos[i]) - abs(mid - i);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
