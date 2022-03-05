#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char g[N][N];
int st[N][N];
int n, m, k;
int sum = 0;
int sx, sy;
int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};



int ans = 0;
void bfs(int f)
{
	memset(st, 0, sizeof st);
	queue<pair<int, int>> q;
	q.push({sx, sy});
	
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i ++ )
		{
			int dx = t.first + xx[i];
			int dy = t.second + yy[i];
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] != 'X' && !st[dx][dy])
			{
				st[dx][dy] = st[t.first][t.second] + 1;
				if (g[dx][dy] - '0' == f) 
				{
					sx = dx;
					sy = dy;
					sum += st[dx][dy];
					return;
				}
				q.push({dx, dy});
			}
		}
	}
	
}
int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
			if (g[i][j] == 'S') 
			{
				sx = i, sy = j;
			}
		}
	}
	for (int i = 1; i <= k; i ++ )
	{
		bfs(i);
	}
	cout << sum << endl;
	return 0;
}
