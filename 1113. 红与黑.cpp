//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 25;
//int n, m;
//char g[N][N];
//
//int xx[4] = {1, 0, -1, 0};
//int yy[4] = {0, 1, 0, -1};
//
//int ans = 1;
//
//void dfs(int x, int y)
//{
//	g[x][y] = '#';
////	cout << x << " " << y << endl;
//	for (int i = 0; i < 4; i ++ )
//	{
//		int dx = x + xx[i];
//		int dy = y + yy[i];
//		if (dx >= 1 && dx <= m && dy >= 1 && dy <= n && g[dx][dy] == '.')
//		{
//			ans ++;
//			dfs(dx, dy);
//		}
//	}
//	
//}
//
//int main()
//{
//	while (cin >> n >> m)
//	{
//		ans = 1;
//		if (n == 0 && m == 0) break;
//		memset(g, ' ', sizeof g);
//		int x, y;
//		for (int i = 1; i <= m; i ++ )
//		{
//			for (int j = 1; j <= n; j ++ )
//			{
//				cin >> g[i][j];
//				if (g[i][j] == '@')
//				{
//					x = i, y = j;
//				}
//			}
//		}
//		dfs(x, y);
//		cout << ans << endl;
//	}
//	
//	
//	
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int n, m;
int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};
char g[N][N];
int bfs (int x, int y)
{
	queue<pair<int, int>> q;
	q.push({x, y});
	int ans = 0;
	
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
		g[t.first][t.second] = '#';
		ans ++;
		
		for (int i = 0; i < 4; i ++ )
		{
			int dx = t.first + xx[i];
			int dy = t.second + yy[i];
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == '.')
			{
				g[dx][dy] = '#';
				q.push({dx, dy});
			}
		}
	}
	return ans;
}

int main()
{
	while (cin >> m >> n)
	{
		if (m == 0 && n == 0) exit(0);
		int x, y;
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
				if (g[i][j] == '@')
				{
					x = i, y = j;
				}
			}
		}
		cout << bfs(x, y) << endl;
	}
	return 0;
}
