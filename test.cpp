#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stdio.h>

using namespace std;
const int N = 1005;

int g[N][N], d[N][N];

int xx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int yy[8] = {0, 1, 0, -1, 1, -1, -1, 1};
//map <pair<int, int>, int> flag;
int flag[N][N];
int bfs()
{
	queue<pair<int, int> > q;
	q.push({0, 0});
	d[0][0] = 0;
	
	while (!q.empty())
	{
		pair<int, int> t = q.front();
		q.pop();
		int x = t.first, y = t.second;
		int dd = d[x][y];
		if (g[x][y] == 2000) return dd;
		if (d[x][y] >= g[x][y] && g[x][y] != 2000) continue;
		
		for (int i = 0; i < 4; i ++ )
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			if ((dd + 1 < g[dx][dy] || g[dx][dy] == 2000) && dx >= 0 && dy >= 0 && !flag[dx][dy])
			{
				flag[dx][dy] = 1;
				q.push({dx, dy});
				d[dx][dy] = dd + 1;
			}
		}
	}
	return -1;
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i <= 1000; i ++ )
	{
		for (int j = 0; j <= 1000; j ++ )
		{
			g[i][j] = 2000;
			d[i][j] = 0;
		}
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		int x, y, s; 
		scanf("%d%d%d", &x, &y, &s);
		
		g[x][y] = min(s, g[x][y]);
		
		for (int j = 0; j < 4; j ++ )
		{
		    int dx = x + xx[j], dy = y + yy[j];
		    
			if (dx >= 0 && dy >= 0)
			{
				g[dx][dy] = min(s, g[dx][dy]);
			}
		}
	}
	cout << bfs() << endl;
	return 0;
}
