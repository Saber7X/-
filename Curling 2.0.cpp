#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 50;
int g[N][N];
int n, m;
int ex, ey;

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

int ans = 11;

void dfs(int x, int y, int temp)
{
	if (x == ex && y == ey) 
	{
//		ans = min(ans, temp);
		if (temp < ans) ans = temp;
		return;
	}
	
	if (temp == 10 || temp >= ans) return;
	
	for (int i = 0; i < 4; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		
		while (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] != 1)
		{
//			if (dx < 1 || dx > n || dy < 1 || dy > m || g[dx][dy] == 1) break;
			if (dx == ex && dy == ey)
			{
				temp ++;
				if (temp < ans) ans = temp;
//				ans = min(ans, temp + 1);
				return;
			}
			dx += xx[i];
			dy += yy[i];
		}
		
		if (dx < 1 || dx > n || dy < 1 || dy > m || (x + xx[i] == dx && y + yy[i] == dy)) continue;
		
		
		g[dx][dy] = 0;
		temp ++;
		dfs(dx - xx[i], dy - yy[i], temp);
		temp --;
		g[dx][dy] = 1;

	}
}

int main()
{
	while (cin >> m >> n, n + m)
	{
//		if (n == 0 && m == 0) break;
		memset(g, 0, sizeof g);
		
		ans = 11;
		
		int sx, sy;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
				if (g[i][j] == 2) 
				{
					sx = i;
					sy = j;
					g[sx][sy] = 0;
				}
				if (g[i][j] == 3)
				{
					ex = i;
					ey = j;
				}
			}
		}
		dfs(sx, sy, 0);
		if (ans == 11 )
		{
			cout << -1 << endl;
		}
		else cout << ans << endl;
		
	}
	return 0;
}
//using namespace std;
//const int N = 25;
//int g[N][N];
//int n, m;
//
//int xx[4] = {1, 0, -1, 0};
//int yy[4] = {0, 1, 0, -1};
//
//int cnt = 0;
//int ans = 0x3f3f3f3f;
//
//
//void dfs(int x, int y, int u, int d, int l, int r)
//{
//	cout << x << " " << y << endl;
//	if (u > 10 || d > 10 || l > 10 || r > 10) return;
//	for (int i = 0; i < 4; i ++ )
//	{
//		bool flag = 0;
//		int dx = dx, dy = dy;
//		if (g[dx + xx[i]][dy + yy[i]] == 1) continue; //不可以相邻
//		
//		while (1)
//		{
//			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m) //不越界的情况 
//			{
//				//到达障碍 
//				if (g[dx][dy] == 1)
//				{
//					cnt ++;
//					g[dx][dy] = 0;
//					if (i == 0)
//					{
//						dfs(dx - 1, dy, u, d, l, r + 1);
//					}
//					else if (i == 1)
//					{
//						dfs(dx, dy - 1, u, d + 1, l, r);
//					}
//					else if (i == 2)
//					{
//						dfs(dx + 1, dy, u, d, l + 1, r);
//					}
//					else if (i == 3)
//					{
//						dfs(dx, dy + 1, u + 1, d, l, r);
//					}
//					cnt --;
//					g[dx][dy] = 1;
//					break;
//				}
//				
//				//到达终点 
//				if (g[dx][dy] == 3)
//				{
//					cnt ++;
//					ans = min(cnt, ans);
//					cnt --;
//					break;
//				}
//			}
//			//超出界限 
//			if (dx > n || dx < 1 || dy > n || dy < 1) break;
//			dx += xx[i];
//			dy += yy[i];
//		}
//	}
//}
//
//
//int main()
//{
//	while (cin >> n >> m)
//	{
//		
//		if (n ==0 && m == 0) break;
//		
//		int a, b;
//		ans = 0x3f3f3f3f;
//		for (int i = 1; i <= n; i ++ )
//		{
//			for (int j = 1; j <= m; j ++ )
//			{
//				cin >> g[i][j];
//				
//				if (g[i][j] == 2) 
//				{
//					g[i][j] = 0;
//					a = i; 
//					b = j;
//				}
//			}
//		}
//		
//		dfs(a, b, 0, 0, 0, 0);
//		if (ans == 0x3f3f3f3f) cout << -1 << endl;
//		else cout << ans << endl;
//	}
//	
//	return 0;
//}

//		while (1)
//		{
//			if (g[dx + xx[i]][dy + yy[i]] == 1)
//			{
//				if (!f) 
//				{
//					break;
//				}
//				f = 1;
//				break;			
//			}
//			if (g[dx + xx[i]][dy + yy[i]] == 3)
//			{
//				ans = min (ans, temp + 1);
//				return;
//			}
//			if (dx > n || dx < 1 || dy < 1 || dx > m)
//			{
//				f = 0;
//				break;
//			}
//			dx += xx[i];
//			dy += yy[i];
//			f = 1;
//		}
//		if (f) 
//		{
//			g[dx + xx[i]][dy + yy[i]] = 0;
//			dfs(dx, dy, temp + 1);
//			g[dx + xx[i]][dy + yy[i]] = 1;
//		}
//		else continue;
