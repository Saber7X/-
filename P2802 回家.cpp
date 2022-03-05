#include<bits/stdc++.h>
using namespace std;
int n, m;
int g[100][100];

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

int sx, sy, ex, ey;

int st[100][100];

struct node{
	int x, y, sum;
};

void bfs()
{
	queue<node> q;
	q.push({sx, sy, 6});
	st[sx][sy] = 1;
	while (!q.empty())
	{
		auto t = q.front();
		if (t.x == sx && t.y == sy)
		{
			break;
		}
		q.pop();
		for (int i = 0; i < 4; i ++ )
		{
			int dx = t.x + xx[i];
			int dy = t.y + yy[i];
			if (!st[t.x][t.y] && dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dy][dy] != 0 && t.sum > 1)
			{
				if (g[dx][dy] == 4)
				{
					q.push({dx, dy, 6});
					st[dx][dy] = st[t.x][t.y] + 1;
				}
				else
				{
					q.push({dx, dy, t.sum - 1});
				}
				
			}
		}
	}
	
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
			if (g[i][j] == 2)
			{
				sx = i, sy = j;
			}
			if (g[i][j] == 3)
			{
				ex = i, ey = j;
			}
		}
	}
	bfs();
	cout << st[ex][ey] - 1 << endl;
	return 0;
}
