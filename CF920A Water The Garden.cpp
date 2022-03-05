#include<bits/stdc++.h>
using namespace std;
const int N = 2500;
bool st[N];
int n, m;
struct name{
	int l, r, cnt;
};
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		cin >> n >> m;
		queue<name> q;
		memset (st, 0, sizeof st);
		for (int i= 1; i <= m; i ++ )
		{
			int x;
			cin >> x;
			q.push({x, x, 1});
			st[x] = 1;
		}
		int ans = 0;
		while (!q.empty())
		{
			auto t = q.front();
			q.pop();
			ans = max(ans, t.cnt);
			int l = t.l, r = t.r, cnt = t.cnt;
//			cout << l << " " << r << endl;
			if ((!st[l - 1] && l - 1 >= 1 )|| (!st[r + 1] && r + 1 <= n))
			{
				st[l - 1] = 1;
				st[r + 1] = 1;
				q.push({max(l - 1, 0), r + 1, cnt + 1});
			}
		}
		cout << ans << endl;
	}
	return 0;
}
