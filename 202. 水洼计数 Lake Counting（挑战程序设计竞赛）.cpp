/*
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 200;

int n, m;
char g[N][N];
bool st[N][N];

int xx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int yy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push({x, y});
	st[x][y] = 1;
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		
		for (int i = 0; i < 8; i ++ )
		{
			int dx = t.first + xx[i];
			int dy = t.second + yy[i];
			if (!st[dx][dy] && g[dx][dy] == 'W' && dx >= 1 && dx <= n && dy >= 1 && dy <= m)
			{
				st[dx][dy] = true;
				q.push({dx, dy});
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
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (!st[i][j] && g[i][j] == 'W')
			{
				ans ++;
				bfs(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
