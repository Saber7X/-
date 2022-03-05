#include<bits/stdc++.h>
using namespace std;

int g[10][10];
int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

int sx, sy, ex, ey;

int ans;

int n, m, t;

void dfs(int x, int y)
{
	if (x == ex && y == ey )
	{
		ans ++;
		cout << endl << ans << endl;
//		for (int i = 1; i <= n; i ++ )
//		{
//			for (int j = 1; j <= m; j ++ )
//			{
//				cout << g[i][j] << " ";
//				
//			}
//			cout << endl;
//		}
		
		return ;
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
}


int main()
{
	cin >> n >> m >> t;
	cin >> sx >> sy >> ex >> ey;
	while (t -- )
	{
		int x, y; 
		cin >> x >> y;
		g[x][y] = 1;
	}
	g[sx][sy] = 1;
	
	dfs(sx, sy);
	cout << ans << endl;
	return 0;
}
