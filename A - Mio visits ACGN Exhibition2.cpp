//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//const int N = 550, mod = 998244353;
//int g[N][N];
//int sum0[N][N], sum1[N][N];
//
//int n, m, c0, c1;
//int ans = 0;
////int cnt0 = 0, cnt1 = 0;
//int xx[2] = {1, 0};
//int yy[2] = {0, 1};
//int st[N][N];
//int f[N][N];
//
//void dfs(int x, int y, int cc0, int cc1)
//{
//	
//	if (g[x][y] == 0) cc0 ++;
//	else cc1 ++;
//	
//	if (cc0 + sum0[x][y] < c0 || cc1 + sum1[x][y] < c1) return;
//	if (cc0 >= c0 && cc1 >= c1)
//	{
////		cout << x <<"and" << y<<":  " << cc0 << " " << cc1 << endl;
//		ans += f[n - x +1][m - y + 1];
//		ans %= mod;
//		return;
//	}
////	if (x == n && y == m)
////	{	
////		if (cc0 >= c0 && cc1 >= c1) 
////		{
////			ans ++;
////			ans %= mod;
////		}
////		return;
////	}
//	
//	for (int i = 0; i < 2; i ++ )
//	{
//		int dx = x + xx[i];
//		int dy = y + yy[i];
//		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && st[dx][dy] == 0) 
//		{
//			st[dx][dy] = 1;
//			dfs(dx, dy, cc0, cc1);
//			st[dx][dy] = 0;
//		}
//	}
//	return;
//}
//
//signed main()
//{
//	cin >> n >> m >> c0 >> c1;
//	for (int i= 1; i <= n; i ++ )
//	{
//		for (int j= 1; j <= m; j ++ )
//		{
//			scanf("%lld", &g[i][j]);
//		}
//	}
//	for (int i = m; i >= 1; i -- )
//	{
//		f[1][i] = 1;
//		sum1[n][i] = sum1[n][i + 1] + g[n][i];
////		if (g[n][i] == 0)
////		{
////			sum0[1][i] = sum[1][i - 1] + 1;
////		}
////		else
////		{
////			sum0[1][i] = sum[1][i - 1];
////		}
//	}
//	for (int i = n; i >= 1; i -- )
//	{
//		f[i][1] = 1;
//		sum1[i][m] = sum1[i + 1][m] + g[i][m];
////		if (g[i][1] == 0)
////		{
////			sum0[i][1] = sum[i - 1][1] + 1;
////		}
////		else
////		{
////			sum0[i][1] = sum[i - 1][1];
////		}
//	}
//	for (int i = n - 1; i >= 1; i -- )
//	{
//		for (int j = m - 1; j >= 1; j -- )
//		{
//			sum1[i][j] = sum1[i + 1][j] + sum1[i][j + 1] - sum1[i + 1][j + 1];
//		}
//	}
//	for (int i = n; i >= 1; i -- )
//	{
//		for (int j = m; j >= 1; j -- )
//		{
//			sum0[i][j] = (n - i + 1) * (m - j + 1) - sum1[i][j];
//		}
//	}
//	for (int i= 2; i <= n; i ++ )
//	{
//		for (int j = 2; j <= m; j ++ )
//		{
//			f[i][j] = f[i - 1][j] + f[i][j - 1];
//		}
//	}
////	for (int i = 1; i <= n; i ++ )
////	{
////		for(int j = 1; j <= n; j ++ )
////		{
////			cout << sum1[i][j] << " ";
////		}
////		cout << endl;
////	}
////	for (int i = 1; i <= n; i ++ )
////	{
////		sum0[1][i] += sum0[1][i - 1];
////	}
//	dfs(1, 1, 0, 0);
////	cout << ans << endl;
//	printf("%lld\n", ans);
//	return 0;
//}

#include<bits/stdc++.h>
#define int long long

using namespace std;

const int N = 550, mod = 998244353;

int g[N][N];
int sum0[N][N], sum1[N][N];
int n, m, c0, c1;
int ans = 0;
int xx[2] = {1, 0};
int yy[2] = {0, 1};
int st[N][N];
int f[N][N];

void dfs(int x, int y, int cc0, int cc1)
{
	
	if (g[x][y] == 0) cc0 ++;
	else cc1 ++;
	
	if (cc0 + sum0[x][y] < c0 || cc1 + sum1[x][y] < c1) return;
	if (cc0 >= c0 && cc1 >= c1)
	{
		ans += f[n - x + 1][m - y + 1];
		ans %= mod;
		return;
	}
	
	for (int i = 0; i < 2; i ++ )
	{
		int dx = x + xx[i];
		int dy = y + yy[i];
		
		if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && st[dx][dy] == 0) 
		{
			st[dx][dy] = 1;
			dfs(dx, dy, cc0, cc1);
			st[dx][dy] = 0;
		}
	}
	return;
}

signed main()
{
	cin >> n >> m >> c0 >> c1;
	
	for (int i= 1; i <= n; i ++ )
	{
		for (int j= 1; j <= m; j ++ )
		{
			scanf("%lld", &g[i][j]);
		}
	}
	
	for (int i = m; i >= 1; i -- )
	{
		f[1][i] = 1;
		sum1[n][i] = sum1[n][i + 1] + g[n][i];
	}
	
	for (int i = n; i >= 1; i -- )
	{
		f[i][1] = 1;
		sum1[i][m] = sum1[i + 1][m] + g[i][m];
	}
	
	for (int i = n - 1; i >= 1; i -- )
	{
		for (int j = m - 1; j >= 1; j -- )
		{
			sum1[i][j] = sum1[i + 1][j] + sum1[i][j + 1] - sum1[i + 1][j + 1];
		}
	}
	
	for (int i = n; i >= 1; i -- )
	{
		for (int j = m; j >= 1; j -- )
		{
			sum0[i][j] = (n - i + 1) * (m - j + 1) - sum1[i][j];
		}
	}
	
	for (int i= 2; i <= n; i ++ )
	{
		for (int j = 2; j <= m; j ++ )
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1];
			f[i][j] %= mod;
		}
	}
	
	dfs(1, 1, 0, 0);

	printf("%lld\n", ans);
	return 0;
}
