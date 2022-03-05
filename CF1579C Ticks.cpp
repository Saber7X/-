#include<bits/stdc++.h>
using namespace std;
const int N = 100 + 10;

char g[N][N];
int vis[N][N], n, m, k;

void check(int x, int y)
{
	int cnt = 0;
	while (1)
	{
		if (g[x - cnt][y - cnt] != '*' || g[x - cnt][y + cnt] != '*' || x < 1 || x > n || y < 1 || y > m) break;
		cnt ++;
	}
	cnt -= 1;//因为初始是0时也判断了一次，所以-1 
	if (cnt >= k)
	{
		vis[x][y] = 0;
		for (int i = 1; i <= cnt; i ++ )
		{
			vis[x - i][y - i] = 0;
			vis[x - i][y + i] = 0;
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n >> m >> k;
		memset(vis, 0, sizeof vis);
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
				if (g[i][j] == '*') vis[i][j] = 1;
			}
		}
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				if (g[i][j] == '*') check(i, j);
			}
		}
		bool f = 0;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				if (vis[i][j] == 1)
				{
					cout << "NO" << endl;
					f = 1;
					break;
				}
			}
			if (f) break;
		}
		if (!f) cout << "YES" << endl;
	}
	return 0;
}
