#include<bits/stdc++.h>
using namespace std;
const int N = 500;

int n, m;
int g[N][N];
int f[N][N];

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};


int dfs(int x, int y)
{
	if (f[x][y] != -1) return f[x][y];
	f[x][y] = 1;
	for (int i = 0; i < 4; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] < g[x][y])
		{
			f[x][y] = max(f[x][y], dfs(dx, dy) + 1);
		}
	}
	return f[x][y];
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
		}
	}
	memset(f, -1, sizeof f);
	int res = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			res = max(res, dfs(i, j));
		}
	}
	cout << res << endl;
	return 0;
}
