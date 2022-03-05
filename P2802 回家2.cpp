#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int n, m;
int g[N][N];
int st[N][N];

struct name{
	int x;
	int y;
	int cnt;
	int sum;
};

queue<name> q;

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

int bfs()
{
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		if (g[t.x][t.y] == 3) return t.cnt;
//		cout << t.x << " " << t.y << " " << t.cnt << " " << t.sum << endl;
		for (int i = 0; i < 4; i ++ )
		{
			int dx = t.x + xx[i];
			int dy = t.y + yy[i];
			int f = g[dx][dy];
			if (dx >= 1 && dx <= n && dy >= 1 &&  dy <= m)
			{
				if ((f == 1 || f == 3) && t.sum - 1 > 0 && t.sum - 1 > st[dx][dy])
				{
					q.push({dx, dy, t.cnt + 1, t.sum - 1});
					st[dx][dy] = t.sum - 1;
				}
				else if (f == 4 && 6 > st[dx][dy] && t.sum - 1 > 0)
				{
					q.push({dx, dy, t.cnt + 1, 6});
					st[dx][dy] = 6;
				}
			}
		}
	}
	return -1;
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
//				cout << i << j << "::" << endl;
				q.push({i, j, 0, 6});
				st[i][j] = 1;
			}
		}
	}
//	cout << endl;
	cout << bfs() << endl;
	return 0;
}
