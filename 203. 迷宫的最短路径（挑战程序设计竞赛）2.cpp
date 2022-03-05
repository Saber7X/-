#include<bits/stdc++.h> 
using namespace std;
const int N = 1e3 + 10;
char g[N][N];
int st[N][N];
int sx, sy, ex, ey;
int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};
int main()
{
	int n, m;
	cin >> n >> m;  
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
			if (g[i][j] == 'S')
			{
				sx = i, sy = j;
				g[i][j] = '.';
			}
			if (g[i][j] == 'G')
			{
				ex = i, ey = j;
				g[i][j] = '.';
			}
		}
	}
	queue<pair<int, int>> q;
	q.push({sx, sy});
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		int x = t.first;
		int y = t.second;
		if (x == ex && y == ey)
		{
			cout << st[x][y];
			break;
		}
		for (int i = 0; i < 4; i ++ )
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			if (!st[dx][dy] && dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == '.')
			{
				st[dx][dy] = st[x][y] + 1;
				q.push({dx, dy});
			}
		}
	}
	return 0;
}
