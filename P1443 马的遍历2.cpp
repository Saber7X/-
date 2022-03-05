#include<bits/stdc++.h> 
using namespace std;
const int N = 500;
int g[N][N];

int xx[8] = {1, 1, -1, -1, 2, 2, -2, -2};
int yy[8] = {2, -2, 2, -2, 1, -1, 1, -1};

int main()
{
	int n, m;
	cin >> n >> m;
	int x, y;
	cin >> x >> y;
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			g[i][j] = -1;
		}
	}
	g[x][y] = 0;
	queue<pair<int, int>> q;
	q.push({x, y});

	while (q.empty() == 0)
	{
		pair<int, int> t = q.front();
		q.pop();
		
		for (int i = 0; i < 8; i ++ )
		{
			int dx = t.first + xx[i];
			int dy = t.second + yy[i];
			
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == -1)
			{
				q.push({dx, dy});
				g[dx][dy] = g[t.first][t.second] + 1;
				
			}
		}
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			printf("%-5d", g[i][j]);//×ó¶ÔÆëÊä³ö 
		}
		cout << endl;
	}
	return 0;
}
