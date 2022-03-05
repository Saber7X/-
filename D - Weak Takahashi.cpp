#include<bits/stdc++.h>
using namespace std;
const int N = 150;
int n, m;
int g[N][N];
int gg[N][N];

int xx[4] = {1, 0};
int yy[4] = {0, 1};

//int bfs(int x, int y)
//{
//	memcpy(gg, g, sizeof g);
//	int sum = 0;
//	queue<pair<int, int>> q;
//	q.push({x, y});
//	gg[x][y] = 1;
//	while (!q.empty())
//	{
//		auto t =  q.front();
//		gg[t.first][t.second] = 1;
//		sum ++;
//		q.pop();
//		for (int i = 0; i < 2; i ++ )
//		{
//			int dx = t.first + xx[i];
//			int dy = t.second + yy[i];
//			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && gg[dx][dy] == 0)
//			{
//				q.push({dx, dy});
//				gg[dx][dy] = 1;
//			}	
//		}
//	}
//	
//	return sum;
//}
int ans = 0;
int dfs(int x, int y, int f)
{
	ans = max(ans, f);
	int sum = 1;
	for (int i = 0; i < 2; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && gg[dx][dy] == 0)
		{
			gg[dx][dy] = 1;
			dfs(dx, dy, f + 1);
			gg[dx][dy] = 0;
		}
	}
	ans = max(ans, f);
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			char x; 
			cin >> x;
			if (x == '.')
			{
				g[i][j] = 0;
			}
			else
			{
				g[i][j] = 1;
			}
		}
	}
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= m; j ++ )
//		{
//			cout << g[i][j];
//		}
//		cout << endl;
//	}
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (g[i][j] == 0)
			{
				memcpy(gg, g, sizeof g);
				dfs(i, j, 1);
				if (ans == n + m - 1)
				{
					cout << ans << endl;
					return 0;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}

/*
5 5
.####
#####
.####
.####
#....
*/
