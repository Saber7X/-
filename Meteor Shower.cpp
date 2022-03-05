#include <bits/stdc++.h>
using namespace std;
const int N = 500;
int g[N][N];
int st[N][N];
int xx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int yy[8] = {0, 1, 0, -1, 1, -1, -1, 1};
int bfs()
{
	queue<pair<int, int>> q;
	q.push({0, 0});
	if (g[0][0] == 0 ) return -1;
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		for (int i = 0; i < 4; i ++ )
		{
			int dx = t.first + xx[i];
			int dy = t.second + yy[i];
			if (dx >= 0 && dx <= 300 && dy >= 0 && dy <= 300 && st[t.first][t.second] + 1 < g[dx][dy] && st[dx][dy] == 0)
			{
				if (g[dx][dy] == 0x3f3f3f3f) return st[t.first][t.second] + 1;
				else
				{
					st[dx][dy] = st[t.first][t.second] + 1;
					q.push({dx, dy});
				}
			}
		}
	}
	return -1;
}


int main()
{
	int m;
	cin >> m;
	memset(g, 0x3f3f3f3f, sizeof g);
	while (m -- )
	{
		int t, x, y;
		cin >> x >> y >> t;
		g[x][y] = min(g[x][y], t);
		for (int i = 0; i < 4; i ++ )
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			if (dx >= 0 && dx <= 500 && dy >= 0 && dy <= 500)
			g[dx][dy] = min(g[dx][dy], t);
		}
		
	}
//	for (int i = 0; i <= 10; i ++ )
//	{
//		for (int j = 0; j <= 10; j ++ )
//		{
//			if (g[i][j] == 0x3f3f3f3f ) g[i][j]  =9;
//			cout << g[i][j] << " ";
//			
//		}
//		cout << endl;
//	}
	cout << bfs();
	return 0;
}
