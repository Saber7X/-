#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int n, m;
char g[N][N];
bool st[N][N];
int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

int sum = 0;
void dfs(int x, int y, char flag)
{
	for (int i = 0; i < 4; i ++ )
	{
		int dx= x + xx[i];
		int dy = y + yy[i];
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == flag && !st[dx][dy])
		{
			st[dx][dy] = 1;
			dfs(dx, dy, flag);
		}
	}
	return;
}

int main()
{
	while (cin >> n >> m)
	{
		memset(st, 0, sizeof st);
		memset(g, ' ', sizeof g);
		if (n == 0 && m == 0) break;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
			}
		}
		int ans = 0;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				if (!st[i][j])
				{
					ans ++;
					dfs(i, j, g[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}
