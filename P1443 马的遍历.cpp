#include<bits/stdc++.h>
using namespace std;

int n, m, x, y;
int d[500][500];

queue<pair<int, int>> q;
int xx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int yy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
void bfs()
{
	q.push({x, y});
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		int a = t.first, b = t.second;
		for (int i = 0; i < 8; i ++ )
		{
			int dx = a + xx[i];
			int dy = b + yy[i];
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && d[dx][dy] == -1)
			{
				d[dx][dy] = d[a][b] + 1;
				q.push({dx, dy});
			}
		}
	}
}

int main()
{
	cin >> n >> m >> x >> y;
	memset(d, -1, sizeof d);
	d[x][y] = 0;
	bfs();
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			printf("%-5d", d[i][j]); //¿¨¸ñÊ½ 
		}
		if (i != n) cout << endl;
		
	}
	return 0;
}
