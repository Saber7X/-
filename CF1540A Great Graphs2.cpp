#include<bits/stdc++.h>
#define int long long
using namespace std;
int num[100005];
int dis[100005];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int ans = 0;
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%lld", &num[i]);
		}
		sort(num + 1, num + 1 + n);
		
		for (int i = 2; i <= n; i ++ )//此处要从2开始 
		{
			dis[i] = num[i] - num[i - 1];
			ans += dis[i];
		}
		for (int i = 2; i <= n; i ++ )
		{
			ans -= (dis[i] * (n - i + 1) * (i - 1));
		}
		cout << ans << endl;
	}
	return 0;
}
