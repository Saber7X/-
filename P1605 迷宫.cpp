#include<bits/stdc++.h>
using namespace std;
const int N = 20;
int sx, sy, ex, ey; 
int n, m, t; 
int g[N][N];

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};
int ans = 0;
void dfs(int x, int y)
{
//	cout << x << " " << y << endl;
	if (x == ex && y == ey)
	{
		cout << ans + 1 << "::" << endl;
		for (int i= 1; i <= n; i ++ )
		{
			for (int j= 1; j <= m; j ++ )
			{
				cout << g[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		ans ++;
		return;
	}
	for (int i = 0; i < 4; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == 0)
		{
			g[dx][dy] = g[x][y] + 1;
			dfs(dx, dy);
			g[dx][dy] = 0;
		}
	}
	return;
}


int main()
{
	cin >> n >> m >> t;
	cin >> sx >> sy >> ex >> ey;
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ ) 
		{
			g[i][j] = 0;
		}
	}
	
	for (int i = 1; i <= t; i ++ )
	{
		int a, b;
		cin >> a >> b;
		g[a][b] = 1;
	}
	
	dfs(sx, sy);
	
	cout << ans << endl;
	return 0;
}
