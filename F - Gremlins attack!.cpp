////#include<bits/stdc++.h>
////using namespace std;
////const int N = 550;
////int n, mm, k; //n*n的坐标，m只小精灵，k盏灯 
////int g[N][N];
////pair<int, int> p[N];
////queue<pair<int, int>> q;
////bool st[N][N];
////
////map <pair<int, int>, int> m;
////
////bool check(int x, int y)
////{
////	if (x == 0 || x == n - 1 || y == 0 || y == n - 1) return true;
////	return false;
////}
////
////int xx[4] = {1, 0, -1, 0};
////int yy[4] = {0, 1, 0, -1};
////
////
////int bfs()
////{
////	
////	while (!q.empty())
////	{
////		auto t = q.front();
////		q.pop();
////		
////		int d = m[t];
////		
////		
////		
////		g[p[d].first][p[d].second] = 0;
////		int x = t.first;
////		int y = t.second;
////		
////		
////		cout << x << " " << y << " " << d << endl;
////		if (check(x, y)) return min(d, k);
////		bool f = 0;
////		for (int i = 0; i < 4; i ++ )
////		{
////			int dx = x + xx[i];
////			int dy = y + yy[i];
////			if (g[dx][dy] == -1 &&  !f)
////			{
////				f= 1;
////				m[{x, y}] = d + 1;
////				q.push({x, y});
////			}
////			else
////			{
////				if (dx >= 0 && dx < n && dy >= 0 && dy < n && g[dx][dy] == 0)
////				{
////					if (!m.count({dx, dy}))
////					{
////						m[{dx, dy}] = d + 1;
////						g[dx][dy] = 1;
////						q.push({dx, dy});
////					}
////				}
////			}
////		}
////	}
////	
////}
////
////
////int main()
////{
////	cin >> n >> mm >> k;
////	
////	
////	for (int i= 1; i <= k; i ++ )
////	{
////		int x, y;
////		cin >> x >> y;
////		g[x][y] = -1;
////		p[i] = {x, y};
////	}
////	for (int i= 1; i <= mm; i ++ ) 
////	{
////		int x, y;
////		cin >> x >> y;
////		q.push({x, y});
////		st[x][y] = 1;
////		m[{x, y}] = 0;
////		g[x][y] = 1;
////	}
////	cout << bfs() + 1;
////	
////	return 0;
////}
//
//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//const int N = 550;
//int ans = 0x3f3f3f3f;
//int g[N][N];
//int n, m, k;
//pair<int, int> p[N * N];
//
//bool check(int x, int y)
//{
//	if ((x == 0 || y == 0 || x == n - 1 || y == n - 1) && (x >= 0 && x < n && y >= 0 && y < n)) return true;
//	return false;
//}
//
//int xx[4] = {1, 0, -1, 0};
//int yy[4] = {0, 1, 0, -1};
//
//bool st[N][N];
//bool f = 0;
//void dfs(int x, int y, int maxn)
//{
//	if (check(x, y))
//	{
//		ans = min (maxn, ans);
//		return;
//	}
//	if (maxn > ans) return;
//	st[x][y] = 1;
//	for (int i = 0; i < 4; i ++ )
//	{
//		int dx = x + xx[i];
//		int dy = y + yy[i];
//		
//		if (dx >= 0 && dx < n && dy >= 0 && dy < n)
//		{
//			if (!st[dx][dy] && g[dx][dy] != -1)
//			{
//				st[dx][dy] = 1;
//				
//				if (g[dx][dy] >= maxn)
//				{
//					dfs(dx, dy, max(maxn, g[dx][dy]));
//				}
//				else
//				{
//					dfs(dx, dy, maxn + 1);
//				}
////				st[dx][dy] = 0;
//			}
//		}
//		
//		
//	}
//	
//}
//
//signed main()
//{
//	
//	memset(g, -1, sizeof g);
//	memset(st, 0, sizeof st);
//	cin >> n >> m >> k;
//	for (int i = 0; i <= n; i ++ )
//	{
//		for (int j = 0; j <= n; j ++ )
//		{
//			st[i][j] = 0;
//			g[i][j] = -1;
//		}
//	}
//	
//	for (int i = 1; i <= m; i ++ ) //存入小精灵的点数 
//	{
//		int x, y;
//		cin >> x >> y;
//		g[x][y] = 0;
//		p[i] = {x, y};
//		if (check(x, y)) f = 1;
//	}
//	
//	for (int i = 1; i <= k; i ++ ) //存入所有的灯 
//	{
//		int x, y;
//		cin >> x >> y;
//		g[x][y] = i;
//	}
//	if (f)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	
//	for (int i = 1; i <= m; i ++ )
//	{
//		int x = p[i].first;
//		int y = p[i].second;
//		memset(st, 0, sizeof st);
//		dfs(x, y, 0);
//	}
//	
//	cout << min(ans, k) << endl;
//	return 0;
//}
//
//#include<bits/stdc++.h>
////#define int long long
//using namespace std;
//const int N = 550;
//int ans = 0x3f3f3f3f;
//int g[N][N];
//int n, m, k;
//pair<int, int> p[N * N];
//
//bool check(int x, int y)
//{
//	if ((x == 0 || y == 0 || x == n - 1 || y == n - 1) && (x >= 0 && x < n && y >= 0 && y < n)) return true;
//	return false;
//}
//
//int xx[4] = {1, 0, -1, 0};
//int yy[4] = {0, 1, 0, -1};
//
//bool st[N][N];
//bool f = 0;
//void dfs(int x, int y, int maxn)
//{
//	st[x][y] = 1;
//	if (maxn > ans)  return;
//	for (int i = 0; i < 4; i ++ )
//	{
//		int dx = x + xx[i];
//		int dy = y + yy[i];
//		
//		if (dx >= 0 && dx < n && dy >= 0 && dy < n)
//		{
//			if (!st[dx][dy])
//			{
//				st[dx][dy] = 1;
//				
//				if (g[dx][dy] == 0)
//				{
//					ans = min (maxn, ans);
//					return;
//				}
//				
//				if (g[dx][dy] > maxn && g[dx][dy] != -1)
//				{
//					dfs(dx, dy, max(maxn, g[dx][dy]) + 1);
//				}
//				else if(g[dx][dy] != -1)
//				{
//					dfs(dx, dy, maxn + 1);
//				}
//				
//			}
//		}
//		
//		
//	}
//	
//}
//
//signed main()
//{
//	
//	memset(g, -1, sizeof g);
//	memset(st, 0, sizeof st);
//	cin >> n >> m >> k;
//	for (int i = 0; i <= n; i ++ )
//	{
//		for (int j = 0; j <= n; j ++ )
//		{
//			st[i][j] = 0;
//			g[i][j] = -1;
//		}
//	}
//	
//	for (int i = 1; i <= m; i ++ ) //存入小精灵的点数 
//	{
//		int x, y;
//		scanf("%d%d", &x, &y);
//		g[x][y] = 0;
//		if (check(x, y)) f = 1;
//	}
//	int cnt = 1;
//	for (int i = 1; i <= k; i ++ ) //存入所有的灯 
//	{
//		int x, y;
//		scanf("%d%d", &x, &y);
//		g[x][y] = i;
//		if (check(x, y)) p[cnt ++ ] = {x, y};
//	}
//	
//	if (f)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	
//	for (int i = 1; i < cnt; i ++ )
//	{
//		int x = p[i].first;
//		int y = p[i].second;
//		memset(st, 0, sizeof st);
//		dfs(x, y, g[x][y]);
//	}
//	
//	cout << min(ans, k) << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 505;
//
////小精灵的位置 
//map<pair<int, int>, int> q;
//
////存储小精灵的位置 
//pair<int, int> a[N * N];
//
////临时变量 
//pair<int, int> t;
//
////方向数组 
//int dx[] = { -1, 0, 1, 0};
//int dy[] = {0, -1, 0, 1};
//
//int ans[N][N];//存点是否能达到出口
// 
//int n, ff = 0;
//
//int ma[N][N];// 点是否为已经灭灯的点
//
//void dfs(int x, int y) 
//{
//	cout << x  << " " << y << endl;
//    if (x == 0 || y == 0 || x == n - 1 || y == n - 1 || ans[x][y]) //如果该点是终点或是能到达终点的点                           
//    {
//        for (int j = 0; j < 4; j ++ ) 
//        {
//            if (x + dx[j] >= 0 && x + dx[j] < n && y + dy[j] >= 0 && y + dy[j] < n) //如果不出界 
//            {
//                if (ans[x + dx[j]][y + dy[j]] == 0) //如果该点不能到达终点 
//                {
//                    ans[x + dx[j]][y + dy[j]] = 1; //标记为可以到达终点 
//                    t.first = x + dx[j];
//                    t.second = y + dy[j];
//                    if (q[t]) //判断是否是小精灵的位置 
//                    {
//                        ff = 1; //标记为存在方案 
//                        return; //返回 
//                    }
//                    if (ma[x + dx[j]][y + dy[j]] == 1) dfs(x + dx[j], y + dy[j]); //如果是已经关掉的灯 
//                        
//                }
//            }
//        }
//        
//    }
//}
//int main() 
//{
//    ios::sync_with_stdio(false);
//    int m, k, x, y, w, i, j;
//    cin >> n >> m >> k;
//    int flag = 1;
//    memset(ans, 0, sizeof(ans));
//    memset(ma, 0, sizeof(ma));
//    for (i = 0; i < m; i++) 
//    {
//        cin >> x >> y;
//        if (x == 0 || y == 0 || x == n - 1 || y == n - 1) 
//        {
//            flag = 0;
//        }
//        a[i].first = x;
//        a[i].second = y;
//        q[a[i]] = 1; //标记小精灵 
//    }
//    
//    if (flag == 0) w = 0; //原本就在终点
// 
//    for (i = 1; i <= k; i++)  //关灯位置 
//    {
//    	cout << endl<<endl;
//        cin >> x >> y;
//        cout << " :::  ";
//        cout << endl<<endl;
//        if (flag)  //如果没有小精灵在终点 
//        {
//            ma[x][y] = 1; //标记为已关闭的灯 
//            dfs(x, y); //dfs 
//            
//            if (ff) //如果已经找到了小精灵 
//            {
//                flag = 0;
//                w = i;
//            }
//        }
//    }
//    cout << w << endl;
//    return 0; 
//}


#include <bits/stdc++.h> 
using namespace std;
const int N = 550;
int n, m, k;
int flag[N][N]; //标记小精灵位置
int safe[N][N];//标记点是否可以到达终点 
int light[N][N];//标记关灯位置 
int f = 0; 
int ans = 0;

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

void dfs(int x, int y)
{
//	cout << x << y << endl;
	if (x == 0 || x == n - 1 || y == 0 || y == n - 1 || safe[x][y])
	{
		for (int i = 0; i < 4; i ++ )
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			if (dx >= 0 && dx < n && dy >= 0 && dy < n) //如果不出界 
			{
				if (!safe[dx][dy]) 
				{
					safe[dx][dy] = 1; //非安全点则标为安全点 
					if (flag[dx][dy]) //找到小精灵 
					{
						f = 1;
						return;
					}
					if (light[dx][dy]) dfs(dx, dy);
				}
			}
		}
	}
}

int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i ++ ) //小精灵位置 
	{
		int x, y;
		cin >> x >> y;
		flag[x][y] = 1;
		if (x == 0 || x == n - 1 || y == 0 || y == n - 1) f = 1;
	}
	for (int i = 1; i <= k; i ++ ) //关灯 
	{
		int x, y;
		cin >> x >> y;
		light[x][y] = 1;
//		safe[x][y] = 1;
		if (f == 0)
		{
			dfs(x, y);
			if (f == 1)
			{
				ans = i;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
